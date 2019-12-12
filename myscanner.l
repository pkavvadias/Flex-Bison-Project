%{
#include "myscanner.tab.h"
int line_num=1;
%}



day			[0][1-9]|[1-2][0-9]|[3][0-1]
days		("Mon"|"Tue"|"Wed"|"Thu"|"Fri"|"Sat"|"Sun")
months		("Jan"|"Feb"|"Mar"|"Apr"|"May"|"Jun"|"Jul"|"Aug"|"Sep"|"Oct"|"Nov"|"Dec")
timesta		[0-1][0-9]":"[0-5][0-9]":"[0-5][0-9]|[2][0-3]":"[0-5][0-9]":"[0-5][0-9]	
year		[0-9]{4}
time 		{days}{ws}{months}{ws}{day}{ws}{timesta}{ws}{year}
int			[1-9][0-9]*|0
boolean		("true"|"false")
string		(\\.|[^\"])* 
ws 			[ \t\n\r]
%%

:					{return COLON;}
,					{return COMMA;}
\{					{return OBRACKETS;}
\}					{return CBRACKETS;}
\[					{return OBRACES;}
\]					{return CBRACES;}
\"created_at\"		{return CREATED_AT;}
\"{time}\"			{return CREATED_AT_ATTRIBUTE;}
\"id_str\"			{return ID_STR;}
\"{int}\"			{return ID_STR_ATTRIBUTE;}
\"text\"			{return TEXT;}
\"user\"			{return USER;}
\"id\"				{return ID;}
\"name\"			{return NAME;}
\"screen_name\"		{return SCREEN_NAME;}
\"location\"		{return LOCATION;}
\"url\"				{return URL;}
\"description\"		{return DESCRIPTION;}
\"place\"			{return PLACE;}
\"entities\"		{return ENTITIES;}
\"hashtags\"		{return HASHTAGS;}
\"urls\"			{return URLS;}
\"unwound\"			{return UNWOUND;}
\"title\"			{return TITLE;}
\"user_mentions\"	{return USER_MENTIONS;}
\"retweeted_status\" {return RETWEETED_STATUS;}
\"extended_tweet\"	{return EXTENDED_TWEET;}
\"truncated\"		{return TRUNCATED;}
\"display_text_range\"	{return DISP_TEXT_RANGE;}
\"full_text\"		{return FULL_TEXT;}
\"indices\"			{return INDICES;}
\"tweet\"			{return TWEET;}
\"extended_entities\" {return EXTENDED_ENTITIES;}
{boolean} 			{return BOOLEAN;}
\"{string}\"		{return STRING;}
{int}				{return INT;}
\n					{++line_num;} 

{ws}				{;}

%%

int yywrap(void)
{
	return 1;
}
