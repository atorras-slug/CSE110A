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
#line 1 "parser.y" /* yacc.c:339  */

// $Id: parser.y,v 1.4 2022-01-11 22:46:28-08 - - $

#pragma GCC diagnostic ignored "-Wold-style-cast"
#pragma GCC diagnostic ignored "-Wfree-nonheap-object"

#include "lyutils.h"
#include "astree.h"

#define ERASE(PTR) { delete (PTR); }

#define NEW_TOKEN(TMP,TOKEN,LOC,LEX)\
   {\
      location new_loc {.filenr=LOC.filenr, \
                        .linenr=LOC.linenr, \
                        .offset=LOC.offset};\
      TMP = astree::make(TOKEN,new_loc,LEX);\
   }

void show (astree_ptr ptr) {
   if (yydebug && ptr) ptr->print_tree (cerr);
}



#line 92 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_VOID = 258,
    TOK_INT = 259,
    TOK_STRING = 260,
    TOK_IF = 261,
    TOK_ELSE = 262,
    TOK_WHILE = 263,
    TOK_RETURN = 264,
    TOK_STRUCT = 265,
    TOK_NULLPTR = 266,
    TOK_ARRAY = 267,
    TOK_ARROW = 268,
    TOK_ALLOC = 269,
    TOK_PTR = 270,
    TOK_EQ = 271,
    TOK_NE = 272,
    TOK_LT = 273,
    TOK_LE = 274,
    TOK_GT = 275,
    TOK_GE = 276,
    TOK_NOT = 277,
    TOK_IDENT = 278,
    TOK_INTCON = 279,
    TOK_CHARCON = 280,
    TOK_STRINGCON = 281,
    TOK_ROOT = 282,
    TOK_BLOCK = 283,
    TOK_CALL = 284,
    TOK_FUNCT = 285,
    TOK_PARAM = 286,
    TOK_TYPE_ID = 287,
    TOK_POS = 288,
    TOK_NEG = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (YYSTYPE astree_root);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 178 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   518

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    40,     2,     2,
      48,    47,    38,    36,    49,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
      45,    35,    46,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    42,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    60,    61,    62,    68,    74,    77,    80,
      89,    97,    98,   101,   109,   110,   111,   119,   130,   149,
     150,   153,   162,   172,   173,   179,   184,   187,   188,   189,
     190,   191,   192,   195,   198,   203,   212,   221,   227,   230,
     238,   244,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   267,   272,   273,   274,   275,   276,
     281,   282,   285,   292,   300,   309,   311,   319,   325,   332,
     333,   339,   346,   347,   348,   349
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_VOID", "TOK_INT", "TOK_STRING",
  "TOK_IF", "TOK_ELSE", "TOK_WHILE", "TOK_RETURN", "TOK_STRUCT",
  "TOK_NULLPTR", "TOK_ARRAY", "TOK_ARROW", "TOK_ALLOC", "TOK_PTR",
  "TOK_EQ", "TOK_NE", "TOK_LT", "TOK_LE", "TOK_GT", "TOK_GE", "TOK_NOT",
  "TOK_IDENT", "TOK_INTCON", "TOK_CHARCON", "TOK_STRINGCON", "TOK_ROOT",
  "TOK_BLOCK", "TOK_CALL", "TOK_FUNCT", "TOK_PARAM", "TOK_TYPE_ID",
  "TOK_POS", "TOK_NEG", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "'}'", "';'", "'{'", "'<'", "'>'", "')'", "'('", "','", "'['", "']'",
  "$accept", "program", "structdef", "structhead", "type", "array",
  "plaintype", "function", "parameters", "paramhead", "block", "blockhead",
  "statement", "vardecl", "muldecl", "while", "ifelse", "if", "return",
  "expr", "allocator", "call", "callhead", "variable", "constant", YY_NULLPTR
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
     285,   286,   287,   288,   289,    61,    43,    45,    42,    47,
      37,    94,   125,    59,   123,    60,    62,    41,    40,    44,
      91,    93
};
# endif

#define YYPACT_NINF -120

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-120)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -120,   498,  -120,    53,   -19,  -120,  -120,    -2,   -17,   -10,
    -120,    25,    15,  -120,    16,  -120,  -120,   -21,  -120,  -120,
      22,    29,    70,    68,    47,    69,  -120,  -120,    22,   470,
    -120,    -3,    59,    39,  -120,    58,    83,  -120,    64,    59,
    -120,    63,   470,    61,  -120,  -120,  -120,   470,   470,   470,
     406,  -120,  -120,    42,  -120,  -120,  -120,    87,  -120,  -120,
    -120,    57,  -120,    72,  -120,    65,  -120,  -120,     5,    -8,
     426,    -8,    -8,   161,    90,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,  -120,   470,
    -120,    73,    76,   443,  -120,  -120,  -120,  -120,  -120,  -120,
     120,  -120,   196,    95,  -120,    82,   106,    84,  -120,   406,
    -120,  -120,   406,   406,   406,   406,   406,   406,    -7,    -7,
      -5,    -5,    -5,    -5,   125,   406,   470,   470,  -120,   231,
     111,  -120,  -120,    91,    85,    92,  -120,   266,   301,  -120,
    -120,   470,   101,   470,   111,   111,   336,   103,   371,  -120,
    -120,  -120,  -120,  -120
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     1,     0,     0,    14,    15,     0,     0,     0,
       2,     0,     0,    12,     0,     3,     4,     0,     5,     6,
       0,     0,     0,     0,     0,     0,    11,    35,     0,     0,
      33,     0,     0,     0,    10,     0,     0,     8,     0,     0,
      75,     0,     0,    69,    72,    73,    74,     0,     0,     0,
      34,    57,    58,     0,    60,    61,    20,     0,    24,    26,
      18,     0,    19,     0,    13,     0,     9,    17,     0,    55,
       0,    53,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
      22,     0,     0,     0,    23,    28,    25,    27,    29,    30,
      38,    31,     0,     0,    16,     0,     0,     0,    66,    68,
      59,    71,    42,    43,    44,    45,    46,    56,    47,    48,
      49,    50,    51,    52,     0,    67,     0,     0,    41,     0,
       0,    32,    21,     0,     0,     0,    70,     0,     0,    40,
      37,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      36,    62,    63,    64
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,  -120,    -4,    88,     2,  -120,   104,  -120,
     -16,  -120,  -119,   150,  -120,  -120,  -120,  -120,  -120,   -29,
    -120,  -120,  -120,  -120,  -120
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    10,    11,    12,    13,    26,    15,    32,    33,
      95,    61,    96,    97,    17,    98,    99,   100,   101,   102,
      51,    52,    53,    54,    55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      50,     5,     6,    14,    20,    74,    74,    25,    74,     8,
     105,   140,     9,    69,    29,   106,    60,     8,    71,    72,
      73,    21,    30,    67,    35,   149,   150,    57,    22,     5,
       6,    83,    84,    85,    86,    23,    86,     8,    27,    28,
       9,   109,    87,    87,    56,    87,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   103,
     125,     5,     6,    91,   129,    92,    93,    24,    40,     8,
      31,    41,     9,    34,     5,     6,     5,     6,    36,    42,
      43,    44,    45,    46,     8,     9,    62,     9,    63,    88,
      37,    89,    38,    47,    48,    18,    19,   137,   138,    94,
      58,    59,    58,    59,    64,    49,    65,    66,    68,    70,
      90,   104,   146,   111,   148,     5,     6,    91,   132,    92,
      93,   126,    40,     8,   127,    41,     9,   130,   133,   134,
     135,   142,    39,    42,    43,    44,    45,    46,    74,   141,
     143,    75,    76,    77,    78,    79,    80,    47,    48,   147,
     152,    16,     0,     0,    58,    59,   107,     0,     0,    49,
       0,    81,    82,    83,    84,    85,    86,     0,     0,     0,
       0,     0,     0,     0,    74,    87,   136,    75,    76,    77,
      78,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,   110,    74,
       0,    87,    75,    76,    77,    78,    79,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,     0,   131,
       0,     0,     0,     0,    74,     0,    87,    75,    76,    77,
      78,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,     0,   139,     0,     0,     0,     0,    74,
       0,    87,    75,    76,    77,    78,    79,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,   144,    74,     0,    87,    75,    76,    77,
      78,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,   145,    74,
       0,    87,    75,    76,    77,    78,    79,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,   151,    74,     0,    87,    75,    76,    77,
      78,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,   153,    74,
       0,    87,    75,    76,    77,    78,    79,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
      41,     0,    81,    82,    83,    84,    85,    86,    42,    43,
      44,    45,    46,     0,    40,     0,    87,    41,     0,     0,
       0,     0,    47,    48,     0,    42,    43,    44,    45,    46,
       0,     0,     0,   108,    49,     0,     0,     0,     0,    47,
      48,    40,     0,     0,    41,     0,   128,     0,     0,     0,
       0,    49,    42,    43,    44,    45,    46,     0,     2,     3,
       0,     4,     5,     6,     0,     0,    47,    48,     7,     0,
       8,     0,     0,     9,     0,     0,     0,     0,    49
};

static const yytype_int16 yycheck[] =
{
      29,     4,     5,     1,    23,    13,    13,    11,    13,    12,
       5,   130,    15,    42,    35,    10,    32,    12,    47,    48,
      49,    23,    43,    39,    22,   144,   145,    31,    45,     4,
       5,    38,    39,    40,    41,    45,    41,    12,    23,    23,
      15,    70,    50,    50,    47,    50,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    63,
      89,     4,     5,     6,    93,     8,     9,    42,    11,    12,
      48,    14,    15,    44,     4,     5,     4,     5,    10,    22,
      23,    24,    25,    26,    12,    15,    47,    15,    49,    47,
      43,    49,    23,    36,    37,    42,    43,   126,   127,    42,
      43,    44,    43,    44,    46,    48,    23,    43,    45,    48,
      23,    46,   141,    23,   143,     4,     5,     6,    23,     8,
       9,    48,    11,    12,    48,    14,    15,     7,    46,    23,
      46,    46,    28,    22,    23,    24,    25,    26,    13,    48,
      48,    16,    17,    18,    19,    20,    21,    36,    37,    48,
      47,     1,    -1,    -1,    43,    44,    68,    -1,    -1,    48,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    50,    51,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    47,    13,
      -1,    50,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    -1,    13,    -1,    50,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,    13,
      -1,    50,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    47,    13,    -1,    50,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    47,    13,
      -1,    50,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    47,    13,    -1,    50,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    47,    13,
      -1,    50,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      14,    -1,    36,    37,    38,    39,    40,    41,    22,    23,
      24,    25,    26,    -1,    11,    -1,    50,    14,    -1,    -1,
      -1,    -1,    36,    37,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    36,
      37,    11,    -1,    -1,    14,    -1,    43,    -1,    -1,    -1,
      -1,    48,    22,    23,    24,    25,    26,    -1,     0,     1,
      -1,     3,     4,     5,    -1,    -1,    36,    37,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,     0,     1,     3,     4,     5,    10,    12,    15,
      54,    55,    56,    57,    58,    59,    65,    66,    42,    43,
      23,    23,    45,    45,    42,    56,    58,    23,    23,    35,
      43,    48,    60,    61,    44,    58,    10,    43,    23,    60,
      11,    14,    22,    23,    24,    25,    26,    36,    37,    48,
      71,    72,    73,    74,    75,    76,    47,    56,    43,    44,
      62,    63,    47,    49,    46,    23,    43,    62,    45,    71,
      48,    71,    71,    71,    13,    16,    17,    18,    19,    20,
      21,    36,    37,    38,    39,    40,    41,    50,    47,    49,
      23,     6,     8,     9,    42,    62,    64,    65,    67,    68,
      69,    70,    71,    56,    46,     5,    10,    57,    47,    71,
      47,    23,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    48,    48,    43,    71,
       7,    43,    23,    46,    23,    46,    51,    71,    71,    43,
      64,    48,    46,    48,    47,    47,    71,    48,    71,    64,
      64,    47,    47,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    53,    53,    54,    55,
      55,    56,    56,    57,    58,    58,    58,    59,    59,    60,
      60,    61,    61,    62,    62,    63,    63,    64,    64,    64,
      64,    64,    64,    65,    66,    66,    67,    68,    68,    69,
      70,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    72,    72,    73,    73,    74,    74,    75,
      75,    75,    76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     3,     3,     0,     3,     4,
       3,     1,     1,     4,     1,     1,     5,     4,     4,     2,
       2,     4,     3,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     2,     5,     3,     1,     5,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     3,     1,     1,     3,
       1,     1,     7,     7,     7,     2,     3,     3,     3,     1,
       4,     3,     1,     1,     1,     1
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
      yyerror (astree_root, YY_("syntax error: cannot back up")); \
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
                  Type, Value, astree_root); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYSTYPE astree_root)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (astree_root);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
          case 3: /* TOK_VOID  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 846 "parser.tab.c" /* yacc.c:684  */
        break;

    case 4: /* TOK_INT  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 852 "parser.tab.c" /* yacc.c:684  */
        break;

    case 5: /* TOK_STRING  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 858 "parser.tab.c" /* yacc.c:684  */
        break;

    case 6: /* TOK_IF  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 864 "parser.tab.c" /* yacc.c:684  */
        break;

    case 7: /* TOK_ELSE  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 870 "parser.tab.c" /* yacc.c:684  */
        break;

    case 8: /* TOK_WHILE  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 876 "parser.tab.c" /* yacc.c:684  */
        break;

    case 9: /* TOK_RETURN  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 882 "parser.tab.c" /* yacc.c:684  */
        break;

    case 10: /* TOK_STRUCT  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 888 "parser.tab.c" /* yacc.c:684  */
        break;

    case 11: /* TOK_NULLPTR  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 894 "parser.tab.c" /* yacc.c:684  */
        break;

    case 12: /* TOK_ARRAY  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 900 "parser.tab.c" /* yacc.c:684  */
        break;

    case 13: /* TOK_ARROW  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 906 "parser.tab.c" /* yacc.c:684  */
        break;

    case 14: /* TOK_ALLOC  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 912 "parser.tab.c" /* yacc.c:684  */
        break;

    case 15: /* TOK_PTR  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 918 "parser.tab.c" /* yacc.c:684  */
        break;

    case 16: /* TOK_EQ  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 924 "parser.tab.c" /* yacc.c:684  */
        break;

    case 17: /* TOK_NE  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 930 "parser.tab.c" /* yacc.c:684  */
        break;

    case 18: /* TOK_LT  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 936 "parser.tab.c" /* yacc.c:684  */
        break;

    case 19: /* TOK_LE  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 942 "parser.tab.c" /* yacc.c:684  */
        break;

    case 20: /* TOK_GT  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 948 "parser.tab.c" /* yacc.c:684  */
        break;

    case 21: /* TOK_GE  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 954 "parser.tab.c" /* yacc.c:684  */
        break;

    case 22: /* TOK_NOT  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 960 "parser.tab.c" /* yacc.c:684  */
        break;

    case 23: /* TOK_IDENT  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 966 "parser.tab.c" /* yacc.c:684  */
        break;

    case 24: /* TOK_INTCON  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 972 "parser.tab.c" /* yacc.c:684  */
        break;

    case 25: /* TOK_CHARCON  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 978 "parser.tab.c" /* yacc.c:684  */
        break;

    case 26: /* TOK_STRINGCON  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 984 "parser.tab.c" /* yacc.c:684  */
        break;

    case 27: /* TOK_ROOT  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 990 "parser.tab.c" /* yacc.c:684  */
        break;

    case 28: /* TOK_BLOCK  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 996 "parser.tab.c" /* yacc.c:684  */
        break;

    case 29: /* TOK_CALL  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1002 "parser.tab.c" /* yacc.c:684  */
        break;

    case 30: /* TOK_FUNCT  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1008 "parser.tab.c" /* yacc.c:684  */
        break;

    case 31: /* TOK_PARAM  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1014 "parser.tab.c" /* yacc.c:684  */
        break;

    case 32: /* TOK_TYPE_ID  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1020 "parser.tab.c" /* yacc.c:684  */
        break;

    case 33: /* TOK_POS  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1026 "parser.tab.c" /* yacc.c:684  */
        break;

    case 34: /* TOK_NEG  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1032 "parser.tab.c" /* yacc.c:684  */
        break;

    case 35: /* '='  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1038 "parser.tab.c" /* yacc.c:684  */
        break;

    case 36: /* '+'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1044 "parser.tab.c" /* yacc.c:684  */
        break;

    case 37: /* '-'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1050 "parser.tab.c" /* yacc.c:684  */
        break;

    case 38: /* '*'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1056 "parser.tab.c" /* yacc.c:684  */
        break;

    case 39: /* '/'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1062 "parser.tab.c" /* yacc.c:684  */
        break;

    case 40: /* '%'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1068 "parser.tab.c" /* yacc.c:684  */
        break;

    case 41: /* '^'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1074 "parser.tab.c" /* yacc.c:684  */
        break;

    case 42: /* '}'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1080 "parser.tab.c" /* yacc.c:684  */
        break;

    case 43: /* ';'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1086 "parser.tab.c" /* yacc.c:684  */
        break;

    case 44: /* '{'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1092 "parser.tab.c" /* yacc.c:684  */
        break;

    case 45: /* '<'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1098 "parser.tab.c" /* yacc.c:684  */
        break;

    case 46: /* '>'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1104 "parser.tab.c" /* yacc.c:684  */
        break;

    case 47: /* ')'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1110 "parser.tab.c" /* yacc.c:684  */
        break;

    case 48: /* '('  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1116 "parser.tab.c" /* yacc.c:684  */
        break;

    case 49: /* ','  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1122 "parser.tab.c" /* yacc.c:684  */
        break;

    case 50: /* '['  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1128 "parser.tab.c" /* yacc.c:684  */
        break;

    case 51: /* ']'  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1134 "parser.tab.c" /* yacc.c:684  */
        break;

    case 53: /* program  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1140 "parser.tab.c" /* yacc.c:684  */
        break;

    case 54: /* structdef  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1146 "parser.tab.c" /* yacc.c:684  */
        break;

    case 55: /* structhead  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1152 "parser.tab.c" /* yacc.c:684  */
        break;

    case 56: /* type  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1158 "parser.tab.c" /* yacc.c:684  */
        break;

    case 57: /* array  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1164 "parser.tab.c" /* yacc.c:684  */
        break;

    case 58: /* plaintype  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1170 "parser.tab.c" /* yacc.c:684  */
        break;

    case 59: /* function  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1176 "parser.tab.c" /* yacc.c:684  */
        break;

    case 60: /* parameters  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1182 "parser.tab.c" /* yacc.c:684  */
        break;

    case 61: /* paramhead  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1188 "parser.tab.c" /* yacc.c:684  */
        break;

    case 62: /* block  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1194 "parser.tab.c" /* yacc.c:684  */
        break;

    case 63: /* blockhead  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1200 "parser.tab.c" /* yacc.c:684  */
        break;

    case 64: /* statement  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1206 "parser.tab.c" /* yacc.c:684  */
        break;

    case 65: /* vardecl  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1212 "parser.tab.c" /* yacc.c:684  */
        break;

    case 66: /* muldecl  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1218 "parser.tab.c" /* yacc.c:684  */
        break;

    case 67: /* while  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1224 "parser.tab.c" /* yacc.c:684  */
        break;

    case 68: /* ifelse  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1230 "parser.tab.c" /* yacc.c:684  */
        break;

    case 69: /* if  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1236 "parser.tab.c" /* yacc.c:684  */
        break;

    case 70: /* return  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1242 "parser.tab.c" /* yacc.c:684  */
        break;

    case 71: /* expr  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1248 "parser.tab.c" /* yacc.c:684  */
        break;

    case 72: /* allocator  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1254 "parser.tab.c" /* yacc.c:684  */
        break;

    case 73: /* call  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1260 "parser.tab.c" /* yacc.c:684  */
        break;

    case 74: /* callhead  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1266 "parser.tab.c" /* yacc.c:684  */
        break;

    case 75: /* variable  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1272 "parser.tab.c" /* yacc.c:684  */
        break;

    case 76: /* constant  */
#line 36 "parser.y" /* yacc.c:684  */
      { astree::print_symbol_value (((*yyvaluep))); }
#line 1278 "parser.tab.c" /* yacc.c:684  */
        break;


      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYSTYPE astree_root)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, astree_root);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, YYSTYPE astree_root)
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
                                              , astree_root);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, astree_root); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYSTYPE astree_root)
{
  YYUSE (yyvaluep);
  YYUSE (astree_root);
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
yyparse (YYSTYPE astree_root)
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
#line 59 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt ((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1878 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 60 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt ((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1884 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 61 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt ((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 1890 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 63 "parser.y" /* yacc.c:1646  */
    {
                                    ERASE ((yyvsp[0]));
                                    (yyvsp[-2])->adopt((yyvsp[-1]));
                                    (yyval) = (yyvsp[-2]);
                                 }
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 69 "parser.y" /* yacc.c:1646  */
    {
                                    ERASE ((yyvsp[0]));
                                    (yyvsp[-2])->adopt((yyvsp[-1]));
                                    (yyval) = (yyvsp[-2]);
                                 }
#line 1910 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 74 "parser.y" /* yacc.c:1646  */
    { (yyval) = astree_root; }
#line 1916 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 77 "parser.y" /* yacc.c:1646  */
    { ERASE ((yyvsp[-1])); ERASE((yyvsp[0])); (yyval) = (yyvsp[-2]);}
#line 1922 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 81 "parser.y" /* yacc.c:1646  */
    {
                              ERASE ((yyvsp[0]));
                              astree_ptr tmp;
                              NEW_TOKEN(tmp,TOK_TYPE_ID,(yyvsp[-2])->loc,"");
                              tmp->adopt((yyvsp[-2]),(yyvsp[-1]));
                              (yyvsp[-3])->adopt(tmp);
                              (yyval) = (yyvsp[-3]);
                           }
#line 1935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 90 "parser.y" /* yacc.c:1646  */
    {
                              ERASE((yyvsp[0]));
                              (yyvsp[-2])->adopt((yyvsp[-1]));
                              (yyval) = (yyvsp[-2]);
                           }
#line 1945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 97 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 98 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 102 "parser.y" /* yacc.c:1646  */
    {
                              ERASE ((yyvsp[-2])); ERASE ((yyvsp[0]));
                              (yyvsp[-3])->adopt((yyvsp[-1]));
                              (yyval) = (yyvsp[-3]);
                           }
#line 1967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 109 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 110 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "parser.y" /* yacc.c:1646  */
    {
                              ERASE ((yyvsp[-3])); ERASE ((yyvsp[-2])); ERASE ((yyvsp[0]));
                              (yyvsp[-4])->adopt((yyvsp[-1]));
                              (yyval) = (yyvsp[-4]);
                           }
#line 1989 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 120 "parser.y" /* yacc.c:1646  */
    {
                     astree_ptr tmp;
                     NEW_TOKEN(tmp,TOK_TYPE_ID,(yyvsp[-3])->loc,"");
                     tmp->adopt((yyvsp[-3]),(yyvsp[-2]));

                     astree_ptr tmp2;
                     NEW_TOKEN(tmp2,TOK_FUNCT,(yyvsp[-3])->loc,"");
                     tmp2->adopt(tmp,(yyvsp[-1]),(yyvsp[0]));
                     (yyval) = tmp2;
                  }
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 131 "parser.y" /* yacc.c:1646  */
    {
                     astree_ptr tmp;
                     NEW_TOKEN(tmp,TOK_TYPE_ID,(yyvsp[-3])->loc,"");
                     tmp->adopt((yyvsp[-3]),(yyvsp[-2]));

                     astree_ptr tmp2;
                     NEW_TOKEN(tmp2,TOK_FUNCT,(yyvsp[-3])->loc,"");
                     tmp2->adopt(tmp,(yyvsp[-1]),(yyvsp[0]));
                     (yyval) = tmp2;
                  }
#line 2019 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 149 "parser.y" /* yacc.c:1646  */
    { ERASE ((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 150 "parser.y" /* yacc.c:1646  */
    { ERASE ((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 154 "parser.y" /* yacc.c:1646  */
    {
                              ERASE ((yyvsp[-2]));
                              astree_ptr tmp;
                              NEW_TOKEN(tmp,TOK_TYPE_ID,(yyvsp[-1])->loc,"");
                              tmp->adopt((yyvsp[-1]),(yyvsp[0]));
                              (yyvsp[-3])->adopt(tmp);
                              (yyval) = (yyvsp[-3]);
                           }
#line 2044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 163 "parser.y" /* yacc.c:1646  */
    {
                              astree_ptr tmp;
                              NEW_TOKEN(tmp,TOK_TYPE_ID,(yyvsp[-1])->loc,"");
                              tmp->adopt((yyvsp[-1]),(yyvsp[0]));
                              (yyvsp[-2])->adopt_as(tmp,TOK_PARAM);
                              (yyval) = (yyvsp[-2]);
                           }
#line 2056 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 172 "parser.y" /* yacc.c:1646  */
    { ERASE ((yyvsp[0])); (yyval) = (yyvsp[-1]);}
#line 2062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 173 "parser.y" /* yacc.c:1646  */
    {
                              (yyvsp[0])->define_as(TOK_BLOCK);
                              (yyval) = (yyvsp[0]);
                           }
#line 2071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 180 "parser.y" /* yacc.c:1646  */
    {
                              (yyvsp[-1])->adopt_as((yyvsp[0]),TOK_BLOCK);
                              (yyval) = (yyvsp[-1]); 
                           }
#line 2080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 184 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2086 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 187 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 188 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2098 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 190 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2110 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 191 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2116 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 192 "parser.y" /* yacc.c:1646  */
    { ERASE ((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 195 "parser.y" /* yacc.c:1646  */
    { ERASE((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 199 "parser.y" /* yacc.c:1646  */
    {
                     (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0]));
                     (yyval) = (yyvsp[-1]);
                  }
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 204 "parser.y" /* yacc.c:1646  */
    {
                     astree_ptr tmp;
                     NEW_TOKEN(tmp,TOK_TYPE_ID,(yyvsp[-1])->loc,"TYPE_ID");
                     tmp->adopt((yyvsp[-1]),(yyvsp[0]));
                     (yyval) = tmp;
                  }
#line 2148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 213 "parser.y" /* yacc.c:1646  */
    {
                              ERASE ((yyvsp[-3])); ERASE ((yyvsp[-1]));
                              (yyvsp[-4])->adopt((yyvsp[-2]),(yyvsp[0]));
                              (yyval) = (yyvsp[-4]);
                           }
#line 2158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 222 "parser.y" /* yacc.c:1646  */
    {
                     (yyvsp[-1])->adopt((yyvsp[0]));
                     (yyvsp[-2])->adopt((yyvsp[-1]));
                     (yyval) = (yyvsp[-2]);
                  }
#line 2168 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 227 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2174 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 231 "parser.y" /* yacc.c:1646  */
    {
                              ERASE ((yyvsp[-3])); ERASE ((yyvsp[-1]));
                              (yyvsp[-4])->adopt((yyvsp[-2]),(yyvsp[0]));
                              (yyval) = (yyvsp[-4]);
                           }
#line 2184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 239 "parser.y" /* yacc.c:1646  */
    {
                                 ERASE ((yyvsp[0]));
                                 (yyvsp[-2])->adopt((yyvsp[-1]));
                                 (yyval) = (yyvsp[-2]);
                              }
#line 2194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 244 "parser.y" /* yacc.c:1646  */
    {
                                 ERASE ((yyvsp[0]));
                                 (yyval) = (yyvsp[-1]);
                              }
#line 2203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 261 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 263 "parser.y" /* yacc.c:1646  */
    {
                                          (yyvsp[-1])->adopt_as((yyvsp[0]),TOK_POS);
                                          (yyval) = (yyvsp[-1]);
                                       }
#line 2278 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 268 "parser.y" /* yacc.c:1646  */
    {
                                          (yyvsp[-1])->adopt_as((yyvsp[0]),TOK_NEG);
                                          (yyval) = (yyvsp[-1]);
                                       }
#line 2287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 272 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 273 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2305 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2311 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 277 "parser.y" /* yacc.c:1646  */
    { 
                                          ERASE ((yyvsp[-2])); ERASE ((yyvsp[0]));
                                          (yyval) = (yyvsp[-1]);
                                       }
#line 2320 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 281 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2326 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 282 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2332 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 286 "parser.y" /* yacc.c:1646  */
    {  
                              ERASE ((yyvsp[-5])); ERASE ((yyvsp[-3]));
                              ERASE ((yyvsp[-2])); ERASE ((yyvsp[0]));
                              (yyvsp[-6])->adopt((yyvsp[-4]),(yyvsp[-1]));
                              (yyval) = (yyvsp[-6]);
                           }
#line 2343 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 293 "parser.y" /* yacc.c:1646  */
    {  
                              ERASE ((yyvsp[-5])); ERASE ((yyvsp[-4]));
                              ERASE ((yyvsp[-2])); ERASE ((yyvsp[-1]));
                              ERASE ((yyvsp[0]));
                              (yyvsp[-6])->adopt((yyvsp[-3]));
                              (yyval) = (yyvsp[-6]);
                           }
#line 2355 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 301 "parser.y" /* yacc.c:1646  */
    {  
                              ERASE ((yyvsp[-5])); ERASE ((yyvsp[-3]));
                              ERASE ((yyvsp[-2])); ERASE ((yyvsp[0]));
                              (yyvsp[-6])->adopt((yyvsp[-4]),(yyvsp[-1]));
                              (yyval) = (yyvsp[-6]);
                           }
#line 2366 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 310 "parser.y" /* yacc.c:1646  */
    { ERASE ((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2372 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 312 "parser.y" /* yacc.c:1646  */
    {
                              ERASE ((yyvsp[0]));
                              (yyvsp[-1])->adopt_as((yyvsp[-2]),TOK_CALL);
                              (yyval) = (yyvsp[-1]);
                           }
#line 2382 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 320 "parser.y" /* yacc.c:1646  */
    {
                              ERASE ((yyvsp[-1]));
                              (yyvsp[-2])->adopt((yyvsp[0]));
                              (yyval) = (yyvsp[-2]);
                           }
#line 2392 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 326 "parser.y" /* yacc.c:1646  */
    {
                              (yyvsp[-1])->adopt_as((yyvsp[-2]),TOK_CALL);
                              (yyvsp[-1])->adopt((yyvsp[0])); (yyval) = (yyvsp[-1]);
                           }
#line 2401 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 332 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2407 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 334 "parser.y" /* yacc.c:1646  */
    {
                              ERASE ((yyvsp[0]));
                              (yyvsp[-2])->adopt((yyvsp[-3]),(yyvsp[-1]));
                              (yyval) = (yyvsp[-2]);
                           }
#line 2417 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 340 "parser.y" /* yacc.c:1646  */
    {
                              (yyvsp[-1])->adopt((yyvsp[-2]),(yyvsp[0]));
                              (yyval) = (yyvsp[-1]);
                           }
#line 2426 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 346 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2432 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 347 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2438 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 348 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2444 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 349 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2450 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2454 "parser.tab.c" /* yacc.c:1646  */
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
      yyerror (astree_root, YY_("syntax error"));
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
        yyerror (astree_root, yymsgp);
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
                      yytoken, &yylval, astree_root);
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
                  yystos[yystate], yyvsp, astree_root);
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
  yyerror (astree_root, YY_("memory exhausted"));
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
                  yytoken, &yylval, astree_root);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, astree_root);
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
#line 355 "parser.y" /* yacc.c:1906  */



const char* get_parser_yytname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}


