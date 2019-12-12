/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "myscanner.y" /* yacc.c:339  */

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

#line 90 "myscanner.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "myscanner.tab.h".  */
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
#line 26 "myscanner.y" /* yacc.c:355  */

int num; 
char* string;

#line 174 "myscanner.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYSCANNER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "myscanner.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   234

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  160
/* YYNRULES -- Number of rules.  */
#define YYNRULES  195
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  343

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    52,    55,    56,    59,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    74,    74,    74,
      77,    77,    77,    80,    80,    80,    84,    84,    84,    84,
      86,    86,    87,    87,    87,    88,    88,    88,    89,    89,
      89,    90,    90,    90,    91,    91,    91,    92,    92,    92,
      93,    93,    93,    96,    96,    96,    96,    99,    99,    99,
      99,   110,   110,   110,   110,   110,   110,   110,   113,   113,
     113,   113,   115,   115,   116,   116,   116,   117,   117,   117,
     117,   117,   117,   117,   118,   118,   118,   118,   121,   121,
     121,   121,   123,   123,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   130,   130,   130,
     130,   132,   132,   133,   133,   133,   133,   134,   134,   134,
     134,   134,   134,   135,   135,   135,   135,   138,   138,   138,
     138,   138,   138,   138,   138,   141,   141,   141,   141,   141,
     141,   141,   143,   143,   144,   144,   144,   144,   148,   148,
     149,   149,   149,   150,   150,   150,   150,   150,   150,   150,
     151,   151,   151,   151,   152,   152,   152,   152,   153,   153,
     153,   153,   156,   156,   157,   157,   157,   158,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   159,   160,   160,
     160,   160,   161,   161,   161,   161
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COLON", "COMMA", "OBRACKETS", "OBRACES",
  "CBRACKETS", "CBRACES", "CREATED_AT", "ID_STR", "TEXT", "USER", "ID",
  "NAME", "URL", "SCREEN_NAME", "LOCATION", "DESCRIPTION", "PLACE",
  "ENTITIES", "HASHTAGS", "URLS", "UNWOUND", "TITLE", "USER_MENTIONS",
  "RETWEETED_STATUS", "EXTENDED_TWEET", "TRUNCATED", "DISP_TEXT_RANGE",
  "FULL_TEXT", "INDICES", "TWEET", "CREATED_AT_ATTRIBUTE",
  "EXTENDED_ENTITIES", "BOOLEAN", "ID_STR_ATTRIBUTE", "STRING", "INT",
  "$accept", "jsonfile", "$@1", "ruleRESTART", "ruleSTART", "$@2",
  "ruleCreate", "$@3", "$@4", "ruleID_STR", "$@5", "$@6", "ruleText",
  "$@7", "$@8", "ruleUser", "$@9", "$@10", "$@11", "rule3", "$@12", "$@13",
  "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22",
  "$@23", "$@24", "$@25", "$@26", "rulePlace", "$@27", "$@28", "$@29",
  "ruleTRUNCA", "$@30", "$@31", "$@32", "ruleDTR", "$@33", "$@34", "$@35",
  "$@36", "$@37", "$@38", "ruleET", "$@39", "$@40", "$@41", "ruleET1",
  "$@42", "$@43", "$@44", "$@45", "$@46", "$@47", "$@48", "$@49", "$@50",
  "$@51", "$@52", "$@53", "ruleHA", "$@54", "$@55", "$@56", "ruleHA1",
  "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65",
  "$@66", "$@67", "$@68", "$@69", "ruleEntities", "$@70", "$@71", "$@72",
  "rule4", "$@73", "$@74", "$@75", "$@76", "$@77", "$@78", "$@79", "$@80",
  "$@81", "$@82", "$@83", "$@84", "rule5", "$@85", "$@86", "$@87", "$@88",
  "$@89", "$@90", "$@91", "rule6", "$@92", "$@93", "$@94", "$@95", "$@96",
  "$@97", "ruleRETWEET", "$@98", "$@99", "$@100", "$@101", "ruleTW",
  "$@102", "$@103", "$@104", "$@105", "$@106", "$@107", "$@108", "$@109",
  "$@110", "$@111", "$@112", "$@113", "$@114", "$@115", "$@116", "$@117",
  "$@118", "$@119", "ruleRS", "$@120", "$@121", "$@122", "$@123", "$@124",
  "$@125", "$@126", "$@127", "$@128", "$@129", "$@130", "$@131", "$@132",
  "$@133", "$@134", "$@135", "$@136", "$@137", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

#define YYPACT_NINF -140

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-140)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,  -140,     9,    -9,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,    15,    32,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,    33,    55,    56,    58,
      59,    60,    61,    62,    63,    64,    65,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
      21,    37,    38,    34,    35,    68,    69,    70,    71,    42,
      72,    74,    32,    33,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,    29,    73,    13,    -4,  -140,    43,
      -5,  -140,  -140,  -140,  -140,  -140,  -140,  -140,    10,  -140,
    -140,  -140,  -140,    47,  -140,  -140,  -140,    48,  -140,  -140,
    -140,  -140,  -140,  -140,    49,    79,    80,    81,    82,    83,
      84,    85,  -140,  -140,    86,    87,    88,  -140,  -140,    89,
      90,    91,  -140,  -140,    92,    94,    95,    96,    97,    98,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,    29,
    -140,  -140,  -140,    13,  -140,  -140,  -140,    -4,  -140,  -140,
    -140,  -140,  -140,  -140,    -5,    66,    57,    67,    75,    76,
      77,    78,    99,   100,   101,   102,   105,   106,   104,    93,
     112,   103,   107,   113,   114,   115,   116,   118,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,   109,   119,   117,
     108,   110,   120,   111,   124,    -7,   125,  -140,  -140,  -140,
    -140,   126,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,    53,  -140,   121,   123,  -140,   130,   132,   134,   135,
     136,   137,   139,  -140,  -140,  -140,   138,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,    -7,   140,  -140,   141,   122,
     127,   128,   144,   145,   146,   147,   142,  -140,   148,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,   129,  -140,   149,
     150,   152,   151,   154,   155,   156,  -140,  -140,    20,  -140,
    -140,  -140,  -140,  -140,  -140,   153,   157,  -140,  -140,   166,
    -140,  -140,   149,  -140,   158,   167,   168,   143,  -140,  -140,
    -140,   170,   159,   164,  -140,  -140,  -140,   169,   171,  -140,
    -140,   161,   160,  -140,   172,  -140,   174,  -140,   175,  -140,
    -140,   162,   176,  -140,  -140,   179,   163,  -140,  -140,   131,
     180,  -140,  -140,   182,   165,  -140,  -140,   173,   178,  -140,
    -140,   181,  -140
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,    17,    20,    23,    26,    53,
     107,    68,    57,    61,   144,     0,     4,     8,     9,    10,
      14,    15,    12,    11,    13,    16,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     6,   142,
      18,    21,    24,    27,    54,   108,    69,    58,    62,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,   143,    19,    22,    25,    28,    55,   109,
      70,    59,    63,   146,     0,     0,     0,     0,    60,     0,
       0,    50,    32,    35,    44,    38,    41,    47,     0,    56,
     113,   117,   123,     0,    84,    77,    74,     0,    64,   150,
     153,   164,   160,   168,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    29,     0,     0,     0,   111,   110,     0,
       0,     0,    72,    71,     0,     0,     0,     0,     0,     0,
     148,   147,    51,    33,    36,    45,    39,    42,    48,     0,
     114,   118,   124,     0,    85,    78,    75,     0,    65,   151,
     154,   165,   161,   169,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,   112,     0,     0,     0,
      73,     0,     0,     0,     0,     0,     0,   149,    52,    34,
      37,    46,    40,    43,    49,   115,   119,   125,    86,    79,
      76,    66,   152,   155,   166,   162,   170,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   116,   120,   126,
      88,     0,    80,    67,   156,   167,   174,   177,   184,   188,
     192,     0,   171,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,   172,   163,   127,     0,    89,    81,   157,
     175,   178,   185,   189,   193,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,   173,   128,     0,    90,
      82,   158,   176,   179,   186,   190,   194,     0,   122,     0,
       0,     0,     0,     0,     0,     0,   129,    94,     0,    83,
     159,   180,   187,   191,   195,     0,     0,    92,    91,     0,
     130,    95,     0,   181,     0,     0,    93,     0,   131,    96,
     182,     0,     0,     0,   132,    97,   183,     0,     0,   133,
      98,     0,     0,   135,     0,    99,     0,   134,     0,   136,
     100,     0,     0,   137,   101,     0,     0,   138,   102,     0,
       0,   139,   103,     0,     0,   140,   104,     0,     0,   141,
     105,     0,   106
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,  -140,   177,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,   -34,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,   -24,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -139,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,    44,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,   183,  -140,  -140,
    -140,  -140,    36,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,   -56,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    15,    16,    50,    17,    27,    52,    18,
      28,    53,    19,    29,    54,    20,    30,    55,    74,    88,
     139,   106,   156,   107,   157,   109,   159,   110,   160,   108,
     158,   111,   161,   105,   155,    21,    31,    56,    75,    22,
      34,    59,    78,    23,    35,    60,    79,   124,   171,   202,
      24,    33,    58,    77,    97,   147,   121,   169,   120,   168,
     201,   226,   249,   270,   119,   167,   200,   211,   224,   248,
     269,   278,   292,   286,   295,   302,   308,   312,   318,   322,
     326,   330,   334,   338,   341,    25,    32,    57,    76,    93,
     143,   114,   163,   197,   115,   164,   198,   223,   258,   116,
     165,   199,   236,   246,   267,   285,   294,   301,   307,   311,
     314,   316,   321,   325,   329,   333,   337,    26,    51,    36,
      61,    80,   104,   154,   125,   172,   126,   173,   203,   227,
     250,   271,   128,   175,   205,   127,   174,   204,   129,   176,
     206,   221,   245,   228,   251,   229,   252,   272,   289,   297,
     303,   230,   253,   273,   231,   254,   274,   232,   255,   275
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
       5,     6,     7,     8,   216,   217,    99,   100,     1,     4,
       9,    10,   218,   219,   112,   101,    94,   113,    11,    12,
      13,   102,    37,    14,   287,    95,    96,   220,   288,   103,
       5,     6,     7,     8,    90,    91,    38,    39,    92,    81,
       9,    10,    82,    83,    84,    85,    86,    87,    11,    12,
      13,   117,   122,   130,   118,   123,   131,   233,    40,    41,
     234,    42,    43,    44,    45,    46,    47,    48,    49,    14,
      65,    64,    66,    67,    68,    69,    70,    71,    72,    73,
      89,    98,   132,   133,   134,   135,   136,   137,   138,   140,
     141,   142,   144,   145,   146,   179,   148,   149,   150,   151,
     152,   153,   178,   112,   180,   162,   185,   186,   187,   117,
     189,   188,   181,   182,   183,   184,   122,   207,   193,   194,
     195,   196,   130,   170,   208,   209,   237,   214,   213,   210,
     190,   215,   222,   225,   238,   239,   235,   240,   241,   242,
     243,   191,   244,   257,   192,   247,   233,   259,   212,   263,
     264,   265,   266,   296,   277,   331,   268,   290,   279,   280,
     260,   282,   283,   284,   261,   262,   276,   281,   291,   293,
     299,   306,   287,   304,   309,   310,   313,   319,   320,   317,
     300,   298,   324,   327,   332,   335,   340,   166,   342,   256,
     177,   315,     0,     0,     0,     0,   305,     0,     0,   323,
       0,   328,     0,   336,     0,     0,     0,     0,     0,     0,
     339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,     0,     0,
       0,     0,     0,     0,    63
};

static const yytype_int16 yycheck[] =
{
       9,    10,    11,    12,    11,    12,    11,    12,     5,     0,
      19,    20,    19,    20,     4,    20,    20,     7,    27,    28,
      29,    26,     7,    32,     4,    29,    30,    34,     8,    34,
       9,    10,    11,    12,    21,    22,     4,     4,    25,    10,
      19,    20,    13,    14,    15,    16,    17,    18,    27,    28,
      29,     4,     4,     4,     7,     7,     7,     4,     3,     3,
       7,     3,     3,     3,     3,     3,     3,     3,     3,    32,
      36,    33,    37,     5,     5,     5,     5,    35,     6,     5,
       7,    38,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,    38,     4,     3,     3,     3,
       3,     3,    36,     4,    37,   139,     6,     6,     6,     4,
       6,     5,    37,    37,    37,    37,     4,     8,     5,     5,
       5,     5,     4,   147,     5,     8,     3,    16,     8,    21,
      37,     7,     7,     7,     4,     3,    15,     3,     3,     3,
       3,    38,     3,     3,    37,     7,     4,     6,    38,     5,
       5,     5,     5,   292,     5,    24,     8,     4,     8,     7,
      38,     7,     7,     7,    37,    37,    37,    16,    11,     3,
       3,     7,     4,     3,     5,     4,    15,     3,     3,     7,
      37,    23,     6,     4,     4,     3,     8,   143,     7,   245,
     154,    31,    -1,    -1,    -1,    -1,    37,    -1,    -1,    37,
      -1,    38,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    40,    41,     0,     9,    10,    11,    12,    19,
      20,    27,    28,    29,    32,    42,    43,    45,    48,    51,
      54,    74,    78,    82,    89,   124,   156,    46,    49,    52,
      55,    75,   125,    90,    79,    83,   158,     7,     4,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
      44,   157,    47,    50,    53,    56,    76,   126,    91,    80,
      84,   159,    43,   156,    33,    36,    37,     5,     5,     5,
       5,    35,     6,     5,    57,    77,   127,    92,    81,    85,
     160,    10,    13,    14,    15,    16,    17,    18,    58,     7,
      21,    22,    25,   128,    20,    29,    30,    93,    38,    11,
      12,    20,    26,    34,   161,    72,    60,    62,    68,    64,
      66,    70,     4,     7,   130,   133,   138,     4,     7,   103,
      97,    95,     4,     7,    86,   163,   165,   174,   171,   177,
       4,     7,     3,     3,     3,     3,     3,     3,     3,    59,
       3,     3,     3,   129,     3,     3,     3,    94,     4,     3,
       3,     3,     3,     3,   162,    73,    61,    63,    69,    65,
      67,    71,    58,   131,   134,   139,   128,   104,    98,    96,
      93,    87,   164,   166,   175,   172,   178,   161,    36,    38,
      37,    37,    37,    37,    37,     6,     6,     6,     5,     6,
      37,    38,    37,     5,     5,     5,     5,   132,   135,   140,
     105,    99,    88,   167,   176,   173,   179,     8,     5,     8,
      21,   106,    38,     8,    16,     7,    11,    12,    19,    20,
      34,   180,     7,   136,   107,     7,   100,   168,   182,   184,
     190,   193,   196,     4,     7,    15,   141,     3,     4,     3,
       3,     3,     3,     3,     3,   181,   142,     7,   108,   101,
     169,   183,   185,   191,   194,   197,   180,     3,   137,     6,
      38,    37,    37,     5,     5,     5,     5,   143,     8,   109,
     102,   170,   186,   192,   195,   198,    37,     5,   110,     8,
       7,    16,     7,     7,     7,   144,   112,     4,     8,   187,
       4,    11,   111,     3,   145,   113,   110,   188,    23,     3,
      37,   146,   114,   189,     3,    37,     7,   147,   115,     5,
       4,   148,   116,    15,   149,    31,   150,     7,   117,     3,
       3,   151,   118,    37,     6,   152,   119,     4,    38,   153,
     120,    24,     4,   154,   121,     3,    38,   155,   122,    37,
       8,   123,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    41,    40,    42,    42,    44,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    46,    47,    45,
      49,    50,    48,    52,    53,    51,    55,    56,    57,    54,
      59,    58,    60,    61,    58,    62,    63,    58,    64,    65,
      58,    66,    67,    58,    68,    69,    58,    70,    71,    58,
      72,    73,    58,    75,    76,    77,    74,    79,    80,    81,
      78,    83,    84,    85,    86,    87,    88,    82,    90,    91,
      92,    89,    94,    93,    95,    96,    93,    97,    98,    99,
     100,   101,   102,    93,   103,   104,   105,    93,   107,   108,
     109,   106,   111,   110,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   110,   125,   126,   127,
     124,   129,   128,   130,   131,   132,   128,   133,   134,   135,
     136,   137,   128,   138,   139,   140,   128,   142,   143,   144,
     145,   146,   147,   148,   141,   150,   151,   152,   153,   154,
     155,   149,   157,   156,   158,   159,   160,   156,   162,   161,
     163,   164,   161,   165,   166,   167,   168,   169,   170,   161,
     171,   172,   173,   161,   174,   175,   176,   161,   177,   178,
     179,   161,   181,   180,   182,   183,   180,   184,   185,   186,
     187,   188,   189,   180,   190,   191,   192,   180,   193,   194,
     195,   180,   196,   197,   198,   180
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     1,     1,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     0,     0,     0,     8,
       0,     4,     0,     0,     5,     0,     0,     5,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     0,     0,     7,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    13,     0,     0,
       0,     8,     0,     4,     0,     0,     5,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,     8,     0,     0,
       0,     8,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       8,     0,     4,     0,     0,     0,     7,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
       0,    13,     0,     4,     0,     0,     0,     8,     0,     4,
       0,     0,     5,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,     8,     0,     0,     0,     7,     0,     0,
       0,     7,     0,     4,     0,     0,     5,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,     7,     0,     0,
       0,     7,     0,     0,     0,     7
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 52 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 1523 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 52 "myscanner.y" /* yacc.c:1646  */
    {printf("}\n");}
#line 1529 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 59 "myscanner.y" /* yacc.c:1646  */
    {printf(",\n");}
#line 1535 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 74 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\"created_at\"");}
#line 1541 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 74 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1547 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 74 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 1553 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 77 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\"id_str\"");}
#line 1559 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 77 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1565 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 77 "myscanner.y" /* yacc.c:1646  */
    {checkifUnique(yytext); printf("\%s",yytext);}
#line 1571 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 80 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\"text\"");}
#line 1577 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 80 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1583 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 80 "myscanner.y" /* yacc.c:1646  */
    {checklength(yytext); printf("\%s",yytext);}
#line 1589 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 84 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\"user\"");}
#line 1595 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 84 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1601 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 84 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 1607 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 84 "myscanner.y" /* yacc.c:1646  */
    {printf("\n\t}");}
#line 1613 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 86 "myscanner.y" /* yacc.c:1646  */
    {printf(",\n");}
#line 1619 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 87 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"id\"");}
#line 1625 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 87 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1631 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 87 "myscanner.y" /* yacc.c:1646  */
    {checkifUnique(yytext); printf("\%s",yytext);}
#line 1637 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 88 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"name\"");}
#line 1643 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 88 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1649 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 88 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 1655 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 89 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"screen_name\"");}
#line 1661 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 89 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1667 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 89 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 1673 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 90 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"location\"");}
#line 1679 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 90 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1685 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 90 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 1691 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 91 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"url\"");}
#line 1697 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 91 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1703 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 91 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 1709 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 92 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"description\"");}
#line 1715 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 92 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1721 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 92 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 1727 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 93 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"id_str\"");}
#line 1733 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 93 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1739 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 93 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 1745 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 96 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\"place\"");}
#line 1751 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 96 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1757 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 96 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 1763 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 96 "myscanner.y" /* yacc.c:1646  */
    {printf("\t}");}
#line 1769 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 99 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\"truncated\"");}
#line 1775 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 99 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1781 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 99 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 1787 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 100 "myscanner.y" /* yacc.c:1646  */
    {
						trun=1;
						if(strcmp(yytext,"false")==0 && range!=0)
							{
							printf("\n Error in line %i ,the length of the text is over 140 characters and truncated is false.\n", line_num);
							exit(EXIT_FAILURE);
							}
						}
#line 1800 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 110 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\"display_text_range\"");}
#line 1806 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 110 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1812 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 110 "myscanner.y" /* yacc.c:1646  */
    {printf("[");}
#line 1818 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 110 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 1824 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 110 "myscanner.y" /* yacc.c:1646  */
    {printf(",");}
#line 1830 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 110 "myscanner.y" /* yacc.c:1646  */
    {if(atoi(yytext)>139){range++;}printf("\%s",yytext);}
#line 1836 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 110 "myscanner.y" /* yacc.c:1646  */
    {printf("]");}
#line 1842 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 113 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\"extended_tweet\"");}
#line 1848 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 113 "myscanner.y" /* yacc.c:1646  */
    {printf(":\n\t");}
#line 1854 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 113 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 1860 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 113 "myscanner.y" /* yacc.c:1646  */
    {printf("\n\t}");}
#line 1866 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 115 "myscanner.y" /* yacc.c:1646  */
    {printf(",\n");}
#line 1872 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 116 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"full_text\"");}
#line 1878 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 116 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1884 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 116 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 1890 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 117 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"display_text_range\"");}
#line 1896 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 117 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1902 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 117 "myscanner.y" /* yacc.c:1646  */
    {printf("[");}
#line 1908 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 117 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 1914 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 117 "myscanner.y" /* yacc.c:1646  */
    {printf(",");}
#line 1920 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 117 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 1926 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 117 "myscanner.y" /* yacc.c:1646  */
    {printf("]");}
#line 1932 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 118 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"entities\"");}
#line 1938 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 118 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 1944 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 118 "myscanner.y" /* yacc.c:1646  */
    {printf("\n\t\t\t{\n");}
#line 1950 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 118 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t}");}
#line 1956 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 121 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\"hashtags\"");}
#line 1962 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 121 "myscanner.y" /* yacc.c:1646  */
    {printf(":\n");}
#line 1968 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 121 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\t[");}
#line 1974 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 121 "myscanner.y" /* yacc.c:1646  */
    {printf("\n\t\t\t\t]\n");}
#line 1980 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 123 "myscanner.y" /* yacc.c:1646  */
    {printf(",\n");}
#line 1986 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf("\n\t\t\t\t\t{\n");}
#line 1992 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\t\"text\"");}
#line 1998 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2004 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 2010 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf(",\n");}
#line 2016 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\t\"indices\"");}
#line 2022 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2028 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf("[");}
#line 2034 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 2040 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf(",");}
#line 2046 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 2052 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf("]");}
#line 2058 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 124 "myscanner.y" /* yacc.c:1646  */
    {printf("\n\t\t\t\t\t}");}
#line 2064 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 130 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\"entities\"");}
#line 2070 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 130 "myscanner.y" /* yacc.c:1646  */
    {printf(":\n\t");}
#line 2076 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 130 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 2082 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 130 "myscanner.y" /* yacc.c:1646  */
    {printf("\n\t}\n");}
#line 2088 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 132 "myscanner.y" /* yacc.c:1646  */
    {printf(",\n");}
#line 2094 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 133 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"hashtags\"");}
#line 2100 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 133 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2106 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 133 "myscanner.y" /* yacc.c:1646  */
    {printf("[");}
#line 2112 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 133 "myscanner.y" /* yacc.c:1646  */
    {printf("]");}
#line 2118 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 134 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"urls\"");}
#line 2124 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 134 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2130 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 134 "myscanner.y" /* yacc.c:1646  */
    {printf("[\n");}
#line 2136 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 134 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t{\n");}
#line 2142 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 134 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t}\n");}
#line 2148 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 134 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t]");}
#line 2154 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 135 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"user_mentions\"");}
#line 2160 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 135 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2166 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 135 "myscanner.y" /* yacc.c:1646  */
    {printf("[");}
#line 2172 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 135 "myscanner.y" /* yacc.c:1646  */
    {printf("]");}
#line 2178 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 138 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\"url\"");}
#line 2184 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 138 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2190 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 138 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 2196 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 138 "myscanner.y" /* yacc.c:1646  */
    {printf(",\n");}
#line 2202 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 138 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\"unwound\"");}
#line 2208 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 138 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2214 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 138 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 2220 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 138 "myscanner.y" /* yacc.c:1646  */
    {printf("\n\t\t\t\t}\n");}
#line 2226 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 141 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\"urls\"");}
#line 2232 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 141 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2238 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 141 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 2244 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 141 "myscanner.y" /* yacc.c:1646  */
    {printf(",\n");}
#line 2250 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 141 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\"title\"");}
#line 2256 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 141 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2262 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 141 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 2268 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 143 "myscanner.y" /* yacc.c:1646  */
    {printf(",\n");}
#line 2274 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 144 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\"tweet\"");}
#line 2280 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 144 "myscanner.y" /* yacc.c:1646  */
    {printf(":\n\t");}
#line 2286 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 144 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 2292 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 144 "myscanner.y" /* yacc.c:1646  */
    {printf("\t}\n");}
#line 2298 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 148 "myscanner.y" /* yacc.c:1646  */
    {printf(",\n");}
#line 2304 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 149 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"text\"");}
#line 2310 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 149 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2316 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 149 "myscanner.y" /* yacc.c:1646  */
    {StartsWith(yytext); printf("\%s",yytext);}
#line 2322 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 150 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"user\"");}
#line 2328 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 150 "myscanner.y" /* yacc.c:1646  */
    {printf(":\n\t\t");}
#line 2334 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 150 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 2340 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 150 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\"screen_name\"");}
#line 2346 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 150 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2352 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 150 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 2358 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 150 "myscanner.y" /* yacc.c:1646  */
    {printf("\n\t\t}");}
#line 2364 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 151 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"retweeted_status\"");}
#line 2370 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 151 "myscanner.y" /* yacc.c:1646  */
    {printf(":\n\t\t");}
#line 2376 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 151 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 2382 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 151 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t}");}
#line 2388 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 152 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"entities\"");}
#line 2394 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 152 "myscanner.y" /* yacc.c:1646  */
    {printf(":\n\t\t");}
#line 2400 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 152 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 2406 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 152 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t}");}
#line 2412 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 153 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\"extended_entities\"");}
#line 2418 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 153 "myscanner.y" /* yacc.c:1646  */
    {printf(":\n\t\t");}
#line 2424 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 153 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 2430 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 153 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t}\n");}
#line 2436 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 156 "myscanner.y" /* yacc.c:1646  */
    {printf(",\n");}
#line 2442 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 157 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\"text\"");}
#line 2448 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 157 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2454 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 157 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 2460 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 158 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\"user\"");}
#line 2466 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 158 "myscanner.y" /* yacc.c:1646  */
    {printf(":\n\t\t\t");}
#line 2472 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 158 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 2478 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 158 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\"screen_name\"");}
#line 2484 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 158 "myscanner.y" /* yacc.c:1646  */
    {printf(":");}
#line 2490 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 158 "myscanner.y" /* yacc.c:1646  */
    {printf("\%s",yytext);}
#line 2496 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 158 "myscanner.y" /* yacc.c:1646  */
    {printf("\n\t\t\t}");}
#line 2502 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 159 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\"place\"");}
#line 2508 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 159 "myscanner.y" /* yacc.c:1646  */
    {printf(":\n\t\t\t");}
#line 2514 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 159 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 2520 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 159 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t}");}
#line 2526 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 160 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\"entities\"");}
#line 2532 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 160 "myscanner.y" /* yacc.c:1646  */
    {printf(":\n\t\t\t");}
#line 2538 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 160 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 2544 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 160 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t}");}
#line 2550 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 161 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t\"extended_entities\"");}
#line 2556 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 161 "myscanner.y" /* yacc.c:1646  */
    {printf(":\n\t\t\t");}
#line 2562 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 161 "myscanner.y" /* yacc.c:1646  */
    {printf("{\n");}
#line 2568 "myscanner.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 161 "myscanner.y" /* yacc.c:1646  */
    {printf("\t\t\t}\n");}
#line 2574 "myscanner.tab.c" /* yacc.c:1646  */
    break;


#line 2578 "myscanner.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 165 "myscanner.y" /* yacc.c:1906  */


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
