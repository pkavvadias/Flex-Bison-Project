%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *yyin;
extern int yylex();
extern char* yytext;
extern int yyparse();
extern int line_num;
int errorline;
int range=0;
int strlength;
int errors=0;
int trun=0;
int id_table[1024];
int uniIDs=0;
int counter;
void checklength(char* s);
void checkifUnique (char* l);
void StartsWith(char* a);
void yyerror(const char* s);
%}

%error-verbose
%union {
int num; 
char* string;}
%token COLON COMMA OBRACKETS OBRACES CBRACKETS CBRACES
%token CREATED_AT ID_STR
%token TEXT USER
%token ID
%token NAME URL
%token SCREEN_NAME	LOCATION
%token DESCRIPTION PLACE
%token ENTITIES HASHTAGS
%token URLS UNWOUND
%token TITLE USER_MENTIONS
%token RETWEETED_STATUS EXTENDED_TWEET TRUNCATED DISP_TEXT_RANGE FULL_TEXT INDICES TWEET 
%token CREATED_AT_ATTRIBUTE 
%token EXTENDED_ENTITIES
%token BOOLEAN
%token ID_STR_ATTRIBUTE
%token STRING
%token INT
%type <string> STRING
%type <num> INT
%start jsonfile

%%
//route GRAMMAR
jsonfile:		OBRACKETS {printf("{\n");} ruleRESTART CBRACKETS {printf("}\n");};

//GRAMMAR for 2.0
ruleRESTART:	ruleSTART
				| ruleRETWEET
				;

ruleSTART:		ruleSTART COMMA {printf(",\n");} ruleSTART
				| ruleCreate
				| ruleID_STR
				| ruleText
				| ruleDTR 
				| ruleTRUNCA
				| ruleET
				| ruleUser
				| rulePlace
				| ruleEntities
				;



//GRAMMAR for CREATE
ruleCreate:		CREATED_AT {printf("\t\"created_at\"");} COLON {printf(":");} CREATED_AT_ATTRIBUTE {printf("\%s",yytext);};

//GRAMMAR for ID_STR
ruleID_STR:		ID_STR {printf("\t\"id_str\"");} COLON {printf(":");} ID_STR_ATTRIBUTE {checkifUnique(yytext); printf("\%s",yytext);};

//GRAMMAR for TEXT
ruleText:		TEXT {printf("\t\"text\"");} COLON {printf(":");} STRING {checklength(yytext); printf("\%s",yytext);};

//GRAMMAR for USER

ruleUser:		USER {printf("\t\"user\"");} COLON {printf(":");} OBRACKETS {printf("{\n");} rule3 CBRACKETS {printf("\n\t}");};

rule3:			rule3 COMMA {printf(",\n");} rule3
				| ID {printf("\t\t\"id\"");} COLON {printf(":");} INT {checkifUnique(yytext); printf("\%s",yytext);} 		
				| NAME {printf("\t\t\"name\"");} COLON {printf(":");} STRING {printf("\%s",yytext);}  
				| SCREEN_NAME {printf("\t\t\"screen_name\"");} COLON {printf(":");} STRING {printf("\%s",yytext);} 
				| LOCATION {printf("\t\t\"location\"");} COLON {printf(":");} STRING {printf("\%s",yytext);}
				| URL {printf("\t\t\"url\"");} COLON {printf(":");} STRING {printf("\%s",yytext);}
				| DESCRIPTION {printf("\t\t\"description\"");} COLON {printf(":");} STRING {printf("\%s",yytext);}
				|ID_STR {printf("\t\t\"id_str\"");} COLON {printf(":");} ID_STR_ATTRIBUTE {printf("\%s",yytext);};
				;				

rulePlace:		PLACE {printf("\t\"place\"");} COLON {printf(":");} OBRACKETS {printf("{\n");} CBRACKETS {printf("\t}");};

//GRAMMAR for TRUNCATED
ruleTRUNCA:		TRUNCATED {printf("\t\"truncated\"");} COLON {printf(":");} BOOLEAN {printf("\%s",yytext);}
						{
						trun=1;
						if(strcmp(yytext,"false")==0 && range!=0)
							{
							printf("\n Error in line %i ,the length of the text is over 140 characters and truncated is false.\n", line_num);
							exit(EXIT_FAILURE);
							}
						};

//GRAMMAR for DTR
ruleDTR:		DISP_TEXT_RANGE {printf("\t\"display_text_range\"");} COLON {printf(":");} OBRACES {printf("[");} INT {printf("\%s",yytext);} COMMA {printf(",");} INT {if(atoi(yytext)>139){range++;}printf("\%s",yytext);} CBRACES {printf("]");};

//GRAMMAR for ruleET
ruleET:			EXTENDED_TWEET {printf("\t\"extended_tweet\"");} COLON {printf(":\n\t");} OBRACKETS {printf("{\n");} ruleET1 CBRACKETS {printf("\n\t}");};

ruleET1:		ruleET1 COMMA {printf(",\n");} ruleET1
				|FULL_TEXT {printf("\t\t\"full_text\"");} COLON {printf(":");} STRING {printf("\%s",yytext);}
				|DISP_TEXT_RANGE {printf("\t\t\"display_text_range\"");} COLON {printf(":");} OBRACES {printf("[");} INT {printf("\%s",yytext);} COMMA {printf(",");} INT {printf("\%s",yytext);} CBRACES {printf("]");};
				|ENTITIES {printf("\t\t\"entities\"");} COLON {printf(":");} OBRACKETS {printf("\n\t\t\t{\n");} ruleHA CBRACKETS {printf("\t\t\t}");}
				;
				
ruleHA:			HASHTAGS {printf("\t\t\t\"hashtags\"");} COLON {printf(":\n");} OBRACES {printf("\t\t\t\t[");} ruleHA1 CBRACES {printf("\n\t\t\t\t]\n");};

ruleHA1:		ruleHA1 COMMA {printf(",\n");} ruleHA1
				|OBRACKETS {printf("\n\t\t\t\t\t{\n");} TEXT {printf("\t\t\t\t\t\"text\"");} COLON {printf(":");} STRING {printf("\%s",yytext);} COMMA {printf(",\n");} INDICES {printf("\t\t\t\t\t\"indices\"");} COLON {printf(":");} OBRACES {printf("[");} INT {printf("\%s",yytext);} COMMA {printf(",");} INT {printf("\%s",yytext);} CBRACES {printf("]");} CBRACKETS {printf("\n\t\t\t\t\t}");}
				;


//GRAMMAR for ENTITIES

ruleEntities:	ENTITIES {printf("\t\"entities\"");} COLON {printf(":\n\t");} OBRACKETS {printf("{\n");} rule4 CBRACKETS {printf("\n\t}\n");} 

rule4:			rule4 COMMA {printf(",\n");} rule4
				|HASHTAGS {printf("\t\t\"hashtags\"");} COLON {printf(":");} OBRACES {printf("[");} CBRACES {printf("]");}
				|URLS {printf("\t\t\"urls\"");} COLON {printf(":");} OBRACES {printf("[\n");} OBRACKETS {printf("\t\t\t{\n");} rule5 CBRACKETS {printf("\t\t\t}\n");}  CBRACES {printf("\t\t]");}
				|USER_MENTIONS {printf("\t\t\"user_mentions\"");} COLON {printf(":");} OBRACES {printf("[");} CBRACES {printf("]");}
				;
				
rule5:			URL {printf("\t\t\t\"url\"");} COLON {printf(":");} STRING {printf("\%s",yytext);} COMMA {printf(",\n");} UNWOUND {printf("\t\t\t\"unwound\"");} COLON {printf(":");} OBRACKETS {printf("{\n");} rule6 CBRACKETS {printf("\n\t\t\t\t}\n");}


rule6:			URL {printf("\t\t\t\t\"urls\"");} COLON {printf(":");} STRING {printf("\%s",yytext);} COMMA {printf(",\n");} TITLE {printf("\t\t\t\t\"title\"");} COLON {printf(":");} STRING {printf("\%s",yytext);}		

ruleRETWEET:	ruleRETWEET COMMA {printf(",\n");} ruleRETWEET
				|TWEET {printf("\t\"tweet\"");} COLON {printf(":\n\t");} OBRACKETS {printf("{\n");} ruleTW CBRACKETS {printf("\t}\n");}
				
				;
				
ruleTW:			ruleTW COMMA {printf(",\n");} ruleTW
				|TEXT {printf("\t\t\"text\"");} COLON {printf(":");} STRING {StartsWith(yytext); printf("\%s",yytext);}
				|USER {printf("\t\t\"user\"");} COLON {printf(":\n\t\t");} OBRACKETS {printf("{\n");} SCREEN_NAME {printf("\t\t\t\"screen_name\"");} COLON {printf(":");} STRING {printf("\%s",yytext);} CBRACKETS {printf("\n\t\t}");}
				|RETWEETED_STATUS {printf("\t\t\"retweeted_status\"");} COLON {printf(":\n\t\t");} OBRACKETS {printf("{\n");} ruleRS CBRACKETS {printf("\t\t}");} 
				|ENTITIES {printf("\t\t\"entities\"");} COLON {printf(":\n\t\t");} OBRACKETS {printf("{\n");} CBRACKETS {printf("\t\t}");}
				|EXTENDED_ENTITIES {printf("\t\t\"extended_entities\"");} COLON {printf(":\n\t\t");} OBRACKETS {printf("{\n");} CBRACKETS {printf("\t\t}\n");}
				;

ruleRS:			ruleRS COMMA {printf(",\n");} ruleRS
				|TEXT {printf("\t\t\t\"text\"");} COLON {printf(":");} STRING {printf("\%s",yytext);}
				|USER {printf("\t\t\t\"user\"");} COLON {printf(":\n\t\t\t");} OBRACKETS {printf("{\n");} SCREEN_NAME {printf("\t\t\t\t\"screen_name\"");} COLON {printf(":");} STRING {printf("\%s",yytext);} CBRACKETS {printf("\n\t\t\t}");}
				|PLACE {printf("\t\t\t\"place\"");} COLON {printf(":\n\t\t\t");} OBRACKETS {printf("{\n");} CBRACKETS {printf("\t\t\t}");} 
				|ENTITIES {printf("\t\t\t\"entities\"");} COLON {printf(":\n\t\t\t");} OBRACKETS {printf("{\n");} CBRACKETS {printf("\t\t\t}");}
				|EXTENDED_ENTITIES {printf("\t\t\t\"extended_entities\"");} COLON {printf(":\n\t\t\t");} OBRACKETS {printf("{\n");} CBRACKETS {printf("\t\t\t}\n");}
				;

				
%%

void checklength (char* s)
{
	if(strlen(s)>140)
	{
		errors++;
		errorline=line_num;
	}
}

void checkifUnique (char* l)
{
	for(counter = 0; counter < uniIDs; counter++)
	{
		if(atoi(l) == id_table[counter])
		{
			errors++;
			printf("\nError in line %i,the id is not unique\n", line_num);
			exit(EXIT_FAILURE);
		}
	}
	id_table[uniIDs] = atoi(l); //prosoxh 8esh Pinaka 0
	uniIDs++;

}

void StartsWith(char* a)
{
	char* b= "\"RT @";
	if(strncmp(a, b, 5) != 0)
	{
		printf("\nError in line %i,the text does not have the right form (RT @).\n", line_num);
		exit(EXIT_FAILURE);		
	}
}
	

int main (int argc, char **argv) {
	FILE *jfile = fopen(argv[1], "r");
	yyin = jfile;
	yyparse();
	if(errors!=0 && trun ==0)
	{
		printf("\nError in line %i ,the length of the text is over 140 characters\n", errorline);
		exit(EXIT_FAILURE);}
	else
	{
		return 0;
	}
	}

void yyerror (const char *s) {fprintf (stderr, "%s\n", s);} 
