/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_MYSCANNER_TAB_H_INCLUDED
# define YY_YY_MYSCANNER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COLON = 258,
    COMMA = 259,
    OBRACKETS = 260,
    OBRACES = 261,
    CBRACKETS = 262,
    CBRACES = 263,
    CREATED_AT = 264,
    ID_STR = 265,
    TEXT = 266,
    USER = 267,
    ID = 268,
    NAME = 269,
    URL = 270,
    SCREEN_NAME = 271,
    LOCATION = 272,
    DESCRIPTION = 273,
    PLACE = 274,
    ENTITIES = 275,
    HASHTAGS = 276,
    URLS = 277,
    UNWOUND = 278,
    TITLE = 279,
    USER_MENTIONS = 280,
    RETWEETED_STATUS = 281,
    EXTENDED_TWEET = 282,
    TRUNCATED = 283,
    DISP_TEXT_RANGE = 284,
    FULL_TEXT = 285,
    INDICES = 286,
    TWEET = 287,
    CREATED_AT_ATTRIBUTE = 288,
    EXTENDED_ENTITIES = 289,
    BOOLEAN = 290,
    ID_STR_ATTRIBUTE = 291,
    STRING = 292,
    INT = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "myscanner.y" /* yacc.c:1909  */

int num; 
char* string;

#line 98 "myscanner.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYSCANNER_TAB_H_INCLUDED  */
