
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "sintactico.y"


#include <stdio.h>
#include <stdlib.h>
#include "string.h"

extern int yylex(void);
extern char *yytext;
extern int linea;
extern FILE *yyin;
void yyerror(char *s);
void para();
char s;



/* Line 189 of yacc.c  */
#line 90 "sintactico.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SELECT = 258,
     FROM = 259,
     ID = 260,
     ASTERISCO = 261,
     COMA = 262,
     GMEDIO = 263,
     GBAJO = 264,
     PUNTO = 265,
     ORDERBY = 266,
     GROUPBY = 267,
     ASC = 268,
     DESC = 269,
     IGUAL = 270,
     DISTINTO = 271,
     MAYORIGUAL = 272,
     MENORIGUAL = 273,
     MAYOR = 274,
     MENOR = 275,
     WHERE = 276,
     TIPREAL = 277,
     OR = 278,
     AND = 279,
     CREATE = 280,
     ENTERO = 281,
     CHAR = 282,
     INT = 283,
     REAL = 284,
     COMILLA = 285,
     ABREPAR = 286,
     CIERRAPAR = 287,
     DEFAULT = 288,
     NOTNULL = 289,
     P_KEY = 290,
     FIN = 291
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 168 "sintactico.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   282

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNRULES -- Number of states.  */
#define YYNSTATES  311

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    13,    22,    30,    39,    41,
      43,    47,    51,    57,    63,    65,    69,    73,    77,    83,
      89,    91,    95,    96,    98,   100,   101,   105,   108,   109,
     111,   113,   114,   116,   118,   128,   138,   147,   155,   163,
     171,   173,   175,   177,   179,   181,   183,   190,   196,   204,
     211,   219,   229,   238,   244,   252,   259,   266,   275,   282,
     284,   286,   288,   293,   300,   307,   316,   321,   328,   330,
     334,   337,   341,   343,   347,   353,   361,   368,   376,   386,
     395,   401,   409,   416,   423,   432,   439,   441,   443,   445,
     450,   457,   464,   473,   478,   485,   487,   491,   497,   505,
     512,   520,   530,   539,   545,   553,   560,   567,   576,   583,
     588,   595,   597,   599,   601,   606,   613,   620,   629,   634,
     641,   643,   647,   653,   661,   668,   676,   686,   695,   701,
     709,   716,   723,   732,   739,   741,   743,   745,   750,   757,
     764,   773,   778,   785,   787
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      38,     0,    -1,    51,    -1,    39,    -1,     3,    40,     4,
      43,    36,    -1,     3,    40,     4,    43,    11,    43,    44,
      36,    -1,     3,    40,     4,    43,    12,    43,    36,    -1,
       3,    40,     4,    43,    21,    48,    45,    36,    -1,     6,
      -1,     5,    -1,     5,     7,    41,    -1,     5,    10,     5,
      -1,     5,    10,     5,     7,    41,    -1,     5,    10,     5,
       7,    42,    -1,     5,    -1,     5,     7,    41,    -1,     5,
       7,    42,    -1,     5,    10,     5,    -1,     5,    10,     5,
       7,    42,    -1,     5,    10,     5,     7,    41,    -1,     5,
      -1,     5,     7,    43,    -1,    -1,    13,    -1,    14,    -1,
      -1,    11,    43,    44,    -1,    12,    43,    -1,    -1,    23,
      -1,    24,    -1,    -1,    30,    -1,    49,    -1,    31,     5,
      50,    47,     5,    47,    32,    46,    48,    -1,    31,     5,
      50,    47,    22,    47,    32,    46,    48,    -1,    31,     5,
      50,    47,    26,    47,    32,    48,    -1,    31,     5,    50,
      47,     5,    47,    32,    -1,    31,     5,    50,    47,    26,
      47,    32,    -1,    31,     5,    50,    47,    22,    47,    32,
      -1,    19,    -1,    20,    -1,    15,    -1,    18,    -1,    17,
      -1,    16,    -1,    25,     5,    31,    52,    32,    36,    -1,
       5,    53,    31,    26,    32,    -1,     5,    53,    31,    26,
      32,     7,    52,    -1,     5,    53,    31,    26,    32,    56,
      -1,     5,    54,    31,    26,     7,    26,    32,    -1,     5,
      54,    31,    26,     7,    26,    32,     7,    52,    -1,     5,
      54,    31,    26,     7,    26,    32,    57,    -1,     5,    55,
      31,    26,    32,    -1,     5,    55,    31,    26,    32,     7,
      52,    -1,     5,    55,    31,    26,    32,    58,    -1,     5,
      53,    31,    26,    32,    59,    -1,     5,    54,    31,    26,
       7,    26,    32,    59,    -1,     5,    55,    31,    26,    32,
      59,    -1,    27,    -1,    29,    -1,    28,    -1,    33,    30,
       5,    30,    -1,    33,    30,     5,    30,     7,    52,    -1,
      33,    30,    26,     7,    26,    30,    -1,    33,    30,    26,
       7,    26,    30,     7,    52,    -1,    33,    30,    26,    30,
      -1,    33,    30,    26,    30,     7,    52,    -1,    34,    -1,
      34,     7,    52,    -1,    34,    60,    -1,    34,     7,    69,
      -1,    35,    -1,    35,     7,    61,    -1,     5,    62,    31,
      26,    32,    -1,     5,    62,    31,    26,    32,     7,    61,
      -1,     5,    62,    31,    26,    32,    65,    -1,     5,    63,
      31,    26,     7,    26,    32,    -1,     5,    63,    31,    26,
       7,    26,    32,     7,    61,    -1,     5,    63,    31,    26,
       7,    26,    32,    66,    -1,     5,    64,    31,    26,    32,
      -1,     5,    64,    31,    26,    32,     7,    61,    -1,     5,
      64,    31,    26,    32,    67,    -1,     5,    62,    31,    26,
      32,    68,    -1,     5,    63,    31,    26,     7,    26,    32,
      68,    -1,     5,    64,    31,    26,    32,    68,    -1,    27,
      -1,    29,    -1,    28,    -1,    33,    30,     5,    30,    -1,
      33,    30,     5,    30,     7,    61,    -1,    33,    30,    26,
       7,    26,    30,    -1,    33,    30,    26,     7,    26,    30,
       7,    61,    -1,    33,    30,    26,    30,    -1,    33,    30,
      26,    30,     7,    61,    -1,    34,    -1,    34,     7,    61,
      -1,     5,    70,    31,    26,    32,    -1,     5,    70,    31,
      26,    32,     7,    69,    -1,     5,    70,    31,    26,    32,
      72,    -1,     5,    49,    31,    26,     7,    26,    32,    -1,
       5,    49,    31,    26,     7,    26,    32,     7,    69,    -1,
       5,    49,    31,    26,     7,    26,    32,    73,    -1,     5,
      71,    31,    26,    32,    -1,     5,    71,    31,    26,    32,
       7,    69,    -1,     5,    71,    31,    26,    32,    74,    -1,
       5,    70,    31,    26,    32,    75,    -1,     5,    49,    31,
      26,     7,    26,    32,    75,    -1,     5,    71,    31,    26,
      32,    75,    -1,    35,    31,     5,    32,    -1,    35,    31,
       5,    32,     7,    76,    -1,    27,    -1,    29,    -1,    28,
      -1,    33,    30,     5,    30,    -1,    33,    30,     5,    30,
       7,    69,    -1,    33,    30,    26,     7,    26,    30,    -1,
      33,    30,    26,     7,    26,    30,     7,    69,    -1,    33,
      30,    26,    30,    -1,    33,    30,    26,    30,     7,    69,
      -1,    34,    -1,    34,     7,    69,    -1,     5,    77,    31,
      26,    32,    -1,     5,    77,    31,    26,    32,     7,    76,
      -1,     5,    77,    31,    26,    32,    80,    -1,     5,    78,
      31,    26,     7,    26,    32,    -1,     5,    78,    31,    26,
       7,    26,    32,     7,    76,    -1,     5,    78,    31,    26,
       7,    26,    32,    81,    -1,     5,    79,    31,    26,    32,
      -1,     5,    79,    31,    26,    32,     7,    76,    -1,     5,
      79,    31,    26,    32,    82,    -1,     5,    77,    31,    26,
      32,    83,    -1,     5,    78,    31,    26,     7,    26,    32,
      83,    -1,     5,    79,    31,    26,    32,    83,    -1,    27,
      -1,    29,    -1,    28,    -1,    33,    30,     5,    30,    -1,
      33,    30,     5,    30,     7,    76,    -1,    33,    30,    26,
       7,    26,    30,    -1,    33,    30,    26,     7,    26,    30,
       7,    76,    -1,    33,    30,    26,    30,    -1,    33,    30,
      26,    30,     7,    76,    -1,    34,    -1,    34,     7,    76,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    62,    64,    65,    66,    67,    69,    69,
      69,    69,    69,    69,    71,    71,    71,    73,    73,    73,
      75,    75,    77,    78,    79,    81,    82,    83,    85,    86,
      87,    89,    90,    92,    94,    95,    96,    97,    98,    99,
     101,   102,   103,   104,   105,   106,   111,   112,   112,   112,
     113,   113,   113,   114,   114,   114,   115,   115,   115,   117,
     118,   119,   120,   120,   121,   121,   122,   122,   124,   124,
     124,   124,   126,   126,   128,   128,   128,   129,   129,   129,
     130,   130,   130,   131,   131,   131,   132,   133,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   140,   140,   140,
     141,   141,   141,   142,   142,   142,   143,   143,   143,   144,
     144,   145,   146,   147,   148,   148,   149,   149,   150,   150,
     151,   151,   153,   153,   153,   154,   154,   154,   155,   155,
     155,   156,   156,   156,   157,   158,   159,   160,   160,   161,
     161,   162,   162,   163,   163
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SELECT", "FROM", "ID", "ASTERISCO",
  "COMA", "GMEDIO", "GBAJO", "PUNTO", "ORDERBY", "GROUPBY", "ASC", "DESC",
  "IGUAL", "DISTINTO", "MAYORIGUAL", "MENORIGUAL", "MAYOR", "MENOR",
  "WHERE", "TIPREAL", "OR", "AND", "CREATE", "ENTERO", "CHAR", "INT",
  "REAL", "COMILLA", "ABREPAR", "CIERRAPAR", "DEFAULT", "NOTNULL", "P_KEY",
  "FIN", "$accept", "sigma", "x", "a", "b", "c", "d", "e", "ff", "log",
  "comi", "condicion", "sss", "operador", "y", "m", "t", "s", "u", "n",
  "o", "r", "p", "q", "mm", "tt", "ss", "uu", "nn", "oo", "rr", "pp",
  "mmm", "ttt", "uuu", "nnn", "ooo", "rrr", "ppp", "mmmm", "tttt", "ssss",
  "uuuu", "nnnn", "oooo", "rrrr", "pppp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    38,    39,    39,    39,    39,    40,    40,
      40,    40,    40,    40,    41,    41,    41,    42,    42,    42,
      43,    43,    44,    44,    44,    45,    45,    45,    46,    46,
      46,    47,    47,    48,    49,    49,    49,    49,    49,    49,
      50,    50,    50,    50,    50,    50,    51,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      54,    55,    56,    56,    57,    57,    58,    58,    59,    59,
      59,    59,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    63,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    49,    71,    72,    72,    73,    73,    74,    74,
      75,    75,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    78,    79,    80,    80,    81,
      81,    82,    82,    83,    83
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     5,     8,     7,     8,     1,     1,
       3,     3,     5,     5,     1,     3,     3,     3,     5,     5,
       1,     3,     0,     1,     1,     0,     3,     2,     0,     1,
       1,     0,     1,     1,     9,     9,     8,     7,     7,     7,
       1,     1,     1,     1,     1,     1,     6,     5,     7,     6,
       7,     9,     8,     5,     7,     6,     6,     8,     6,     1,
       1,     1,     4,     6,     6,     8,     4,     6,     1,     3,
       2,     3,     1,     3,     5,     7,     6,     7,     9,     8,
       5,     7,     6,     6,     8,     6,     1,     1,     1,     4,
       6,     6,     8,     4,     6,     1,     3,     5,     7,     6,
       7,     9,     8,     5,     7,     6,     6,     8,     6,     4,
       6,     1,     1,     1,     4,     6,     6,     8,     4,     6,
       1,     3,     5,     7,     6,     7,     9,     8,     5,     7,
       6,     6,     8,     6,     1,     1,     1,     4,     6,     6,
       8,     4,     6,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     2,     9,     8,     0,     0,
       1,     0,     0,     0,     0,    14,    10,    11,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,    59,
      61,    60,     0,     0,     0,     0,    14,    15,    16,    12,
      13,    21,    22,     0,   112,     0,    25,    33,     0,     0,
       0,    46,     0,    23,    24,     0,     6,     0,     0,     0,
       0,     0,     0,     0,    17,     5,    42,    45,    44,    43,
      40,    41,    31,    22,    27,     7,    47,     0,    53,     0,
      32,     0,    26,     0,     0,    68,    49,    56,     0,     0,
       0,    55,    58,    19,    18,    31,    31,    31,    48,     0,
       0,    72,    70,    50,    54,     0,     0,     0,     0,     0,
       0,     0,    69,    71,     0,     0,     0,    52,    57,     0,
      37,    39,    38,    62,    59,    61,    60,     0,     0,     0,
       0,     0,    73,    51,     0,    66,    29,    30,     0,     0,
      36,     0,     0,     0,     0,     0,    86,    88,    87,     0,
       0,     0,     0,     0,    34,    35,    63,     0,     0,     0,
     109,     0,     0,     0,     0,    67,     0,    97,   103,     0,
       0,     0,     0,     0,     0,     0,     0,   120,    99,   106,
       0,     0,   105,   108,     0,   110,    74,     0,    80,    64,
     100,     0,    98,     0,     0,   104,     0,   134,   136,   135,
       0,     0,     0,     0,     0,    95,    76,    83,     0,     0,
       0,    82,    85,     0,     0,     0,   102,   107,   111,   113,
       0,   121,     0,     0,     0,     0,    75,     0,     0,    77,
      81,     0,    65,   101,     0,   114,   118,     0,     0,     0,
       0,    96,     0,     0,    79,    84,     0,     0,     0,     0,
     122,     0,   128,    89,    78,     0,    93,     0,   115,   119,
       0,     0,   143,   124,   131,     0,     0,     0,   130,   133,
       0,     0,     0,     0,   123,     0,     0,   125,   129,     0,
      90,     0,    94,   116,     0,   144,     0,     0,   127,   132,
       0,     0,     0,   137,   126,     0,   141,    91,   117,     0,
       0,     0,     0,   138,     0,   142,    92,     0,   139,     0,
     140
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     8,    16,    38,    19,    55,    60,   138,
      81,    46,    47,    72,     5,    21,    32,    33,    34,    86,
     117,    91,    87,   102,   132,   149,   150,   151,   206,   244,
     211,   207,   113,   128,   129,   178,   216,   182,   179,   185,
     200,   201,   202,   263,   288,   268,   264
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -249
static const yytype_int16 yypact[] =
{
      19,    20,    30,    55,  -249,  -249,    17,  -249,    73,    63,
    -249,   110,   123,   136,   141,    77,  -249,   115,   149,    81,
      68,   125,   153,   153,   136,   136,   136,    87,  -249,  -249,
    -249,  -249,    74,   128,   129,   112,    24,  -249,  -249,  -249,
    -249,  -249,   139,   126,  -249,   156,   143,  -249,   137,   138,
     140,  -249,   160,  -249,  -249,   131,  -249,   117,   136,   136,
     132,   142,   162,   144,   163,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,   145,   139,  -249,  -249,    23,   146,    29,   153,
    -249,    11,  -249,   141,   147,     4,  -249,  -249,   148,   141,
     151,  -249,  -249,  -249,  -249,   145,   145,   145,  -249,   166,
      14,   171,  -249,    33,  -249,   157,   150,   152,   154,   155,
     111,   158,  -249,  -249,   168,   141,   161,  -249,  -249,   164,
     100,   100,    87,   172,  -249,  -249,  -249,   159,   165,   167,
     182,    79,  -249,  -249,   169,   181,  -249,  -249,    87,    87,
    -249,   141,   173,   174,   175,   170,  -249,  -249,  -249,   176,
     177,   178,   185,   141,  -249,  -249,  -249,   186,   179,   180,
     190,   184,   187,   188,   189,  -249,   191,    35,    45,   198,
     192,   197,   193,   196,   195,    15,   199,   209,  -249,  -249,
      15,   200,  -249,  -249,    98,  -249,    47,   194,    53,   211,
      57,   116,  -249,   201,    15,  -249,   202,  -249,  -249,  -249,
     203,   204,   205,   168,   207,   212,  -249,  -249,   206,   168,
     210,  -249,  -249,   141,    15,   213,  -249,  -249,  -249,  -249,
     214,  -249,   215,   216,   220,   221,  -249,   217,   168,    65,
    -249,   222,  -249,  -249,   223,   224,   225,   218,   226,   219,
     227,  -249,   168,   228,  -249,  -249,   229,   232,    15,    15,
      67,   230,    76,   234,  -249,   235,   245,   236,  -249,  -249,
     198,   233,   246,  -249,  -249,   237,   198,   238,  -249,  -249,
     168,   247,   168,   240,  -249,   250,   198,    78,  -249,   239,
    -249,   241,  -249,   253,   242,  -249,   198,   243,  -249,  -249,
     244,   248,    15,   257,  -249,   249,   259,   264,  -249,   198,
     269,   198,   168,  -249,   251,  -249,  -249,   252,   272,   198,
    -249
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -249,  -249,  -249,  -249,   -14,   -20,   -11,   208,  -249,    84,
      54,   -18,  -109,  -249,  -249,   -83,  -249,  -249,  -249,  -249,
    -249,  -249,    10,  -249,  -199,  -249,  -249,  -249,  -249,  -249,
    -249,  -183,  -173,  -249,  -249,  -249,  -249,  -249,  -145,  -248,
    -249,  -249,  -249,  -249,  -249,  -249,  -163
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -29
static const yytype_int16 yytable[] =
{
      98,   127,   192,    40,   226,   212,   104,   195,    37,    39,
     230,   100,   274,    41,    42,    43,    95,   112,   278,   110,
     191,   221,     1,   183,    11,     6,     7,    12,   285,   241,
      83,    22,   133,    96,    52,     9,    89,    97,   294,   101,
     115,   233,   175,   254,     2,   217,   245,    73,    74,   111,
     111,   303,   180,   305,   203,    10,    84,    85,   156,    94,
     209,   310,    90,    85,   214,    93,   116,    85,   176,   177,
     165,   280,   242,   282,   260,   258,   259,    13,   181,   177,
     204,   205,   127,   266,    22,   286,   210,   205,    92,   269,
     215,   177,    25,    26,    14,    29,    30,    31,   243,   205,
     261,   262,    27,   306,   140,    48,   146,   147,   148,   267,
     262,   287,   262,   118,   289,    15,    44,    28,    45,   298,
     154,   155,    23,   136,   137,   197,   198,   199,    17,   -28,
     232,   -28,    66,    67,    68,    69,    70,    71,   124,   125,
     126,    18,    45,   218,   219,    44,    20,    45,    51,   106,
     107,   108,    53,    54,    58,    59,    24,    35,    36,    49,
      50,    57,    56,    61,    62,    64,    63,    65,    75,    77,
      79,   109,    88,   131,    76,    80,    78,    99,   114,   141,
     103,   105,   120,   119,   121,   123,   122,   145,   153,   130,
     142,   134,   164,   166,   135,   152,   143,   169,   144,   157,
     158,   159,   160,   184,   187,   139,   220,   161,   162,   163,
     170,   167,   168,   171,   172,   173,   194,   174,   213,   228,
     208,     0,   240,     0,   186,   188,   189,   190,   222,   193,
     196,   248,   249,   251,   223,   224,   225,   227,   229,   257,
     231,   270,   237,   234,   235,   236,   238,   239,   246,   247,
     250,   252,   272,   276,   281,   284,   265,   253,   255,   256,
     292,   271,   273,   275,   299,   290,   301,   291,   279,   277,
     283,   302,   293,   295,   296,   300,   304,   307,   297,   309,
       0,    82,   308
};

static const yytype_int16 yycheck[] =
{
      83,   110,   175,    23,   203,   188,    89,   180,    22,    23,
     209,     7,   260,    24,    25,    26,     5,   100,   266,     5,
       5,   194,     3,   168,     7,     5,     6,    10,   276,   228,
       7,     7,   115,    22,    10,     5,     7,    26,   286,    35,
       7,   214,     7,   242,    25,   190,   229,    58,    59,    35,
      35,   299,     7,   301,     7,     0,    33,    34,   141,    79,
       7,   309,    33,    34,     7,    79,    33,    34,    33,    34,
     153,   270,     7,   272,     7,   248,   249,     4,    33,    34,
      33,    34,   191,     7,     7,     7,    33,    34,    78,   252,
      33,    34,    11,    12,    31,    27,    28,    29,    33,    34,
      33,    34,    21,   302,   122,    31,    27,    28,    29,    33,
      34,    33,    34,   103,   277,     5,    29,    36,    31,   292,
     138,   139,     7,    23,    24,    27,    28,    29,     5,    29,
     213,    31,    15,    16,    17,    18,    19,    20,    27,    28,
      29,     5,    31,    27,    28,    29,     5,    31,    36,    95,
      96,    97,    13,    14,    11,    12,     7,    32,     5,    31,
      31,     5,    36,    26,    26,     5,    26,    36,    36,     7,
       7,     5,    26,     5,    32,    30,    32,    30,     7,     7,
      32,    30,    32,    26,    32,    30,    32,     5,     7,    31,
      31,    30,     7,     7,    30,    26,    31,     7,    31,    26,
      26,    26,    32,     5,     7,   121,     5,    31,    31,    31,
      26,    32,    32,    26,    26,    26,     7,    26,     7,     7,
      26,    -1,     5,    -1,    32,    32,    30,    32,    26,    30,
      30,     7,     7,     7,    31,    31,    31,    30,    32,     7,
      30,     7,    26,    30,    30,    30,    26,    26,    26,    26,
      32,    32,     7,     7,     7,     5,    26,    30,    30,    30,
       7,    26,    26,    30,     7,    26,     7,    26,    30,    32,
      30,     7,    30,    30,    30,    26,     7,    26,    30,     7,
      -1,    73,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    25,    38,    39,    51,     5,     6,    40,     5,
       0,     7,    10,     4,    31,     5,    41,     5,     5,    43,
       5,    52,     7,     7,     7,    11,    12,    21,    36,    27,
      28,    29,    53,    54,    55,    32,     5,    41,    42,    41,
      42,    43,    43,    43,    29,    31,    48,    49,    31,    31,
      31,    36,    10,    13,    14,    44,    36,     5,    11,    12,
      45,    26,    26,    26,     5,    36,    15,    16,    17,    18,
      19,    20,    50,    43,    43,    36,    32,     7,    32,     7,
      30,    47,    44,     7,    33,    34,    56,    59,    26,     7,
      33,    58,    59,    41,    42,     5,    22,    26,    52,    30,
       7,    35,    60,    32,    52,    30,    47,    47,    47,     5,
       5,    35,    52,    69,     7,     7,    33,    57,    59,    26,
      32,    32,    32,    30,    27,    28,    29,    49,    70,    71,
      31,     5,    61,    52,    30,    30,    23,    24,    46,    46,
      48,     7,    31,    31,    31,     5,    27,    28,    29,    62,
      63,    64,    26,     7,    48,    48,    52,    26,    26,    26,
      32,    31,    31,    31,     7,    52,     7,    32,    32,     7,
      26,    26,    26,    26,    26,     7,    33,    34,    72,    75,
       7,    33,    74,    75,     5,    76,    32,     7,    32,    30,
      32,     5,    69,    30,     7,    69,    30,    27,    28,    29,
      77,    78,    79,     7,    33,    34,    65,    68,    26,     7,
      33,    67,    68,     7,     7,    33,    73,    75,    27,    28,
       5,    69,    26,    31,    31,    31,    61,    30,     7,    32,
      61,    30,    52,    69,    30,    30,    30,    26,    26,    26,
       5,    61,     7,    33,    66,    68,    26,    26,     7,     7,
      32,     7,    32,    30,    61,    30,    30,     7,    69,    69,
       7,    33,    34,    80,    83,    26,     7,    33,    82,    83,
       7,    26,     7,    26,    76,    30,     7,    32,    76,    30,
      61,     7,    61,    30,     5,    76,     7,    33,    81,    83,
      26,    26,     7,    30,    76,    30,    30,    30,    69,     7,
      26,     7,     7,    76,     7,    76,    61,    26,    30,     7,
      76
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1652 "sintactico.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 170 "sintactico.y"



void yyerror(char *s) {

printf ("Error sintactico");

}


int main (int argc, char *argv[]) {

yyin=fopen(argv[1],"rt");


yyparse();

return 0;

}

