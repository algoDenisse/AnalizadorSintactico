/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 3 "parser.y" /* yacc.c:339  */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int yyerror(char *s);
int yylex(void);
FILE * yyin;

#line 75 "parser.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    ID = 258,
    CONSTANT = 259,
    STRING = 260,
    SIZEOF = 261,
    DEFINE = 262,
    VALUE = 263,
    SPACE = 264,
    NEWLINE = 265,
    QUOTES = 266,
    LIBRARY = 267,
    CODIGO = 268,
    ARROW = 269,
    PLUSPLUS = 270,
    MINUSMINUS = 271,
    SHL = 272,
    SHR = 273,
    LEQ = 274,
    GEQ = 275,
    EQUAL = 276,
    NOTEQUAL = 277,
    DIVEQUAL = 278,
    MODEQUAL = 279,
    AND = 280,
    OR = 281,
    MUL = 282,
    DIV = 283,
    MOD = 284,
    PLUSEQUAL = 285,
    MULEQUAL = 286,
    ELLIPSIS = 287,
    INCLUDE = 288,
    PRINTSTRING = 289,
    MINUSEQUAL = 290,
    SHLEQUAL = 291,
    SHREQUAL = 292,
    ANDEQUAL = 293,
    FILENAME = 294,
    TAB = 295,
    LESSMORE = 296,
    ROOFEQUAL = 297,
    OREQUAL = 298,
    ASSIGN = 299,
    PLUS = 300,
    MINUS = 301,
    BITAND = 302,
    BITOR = 303,
    ROOF = 304,
    TAIL = 305,
    LESS = 306,
    GREATER = 307,
    TYPEDEF = 308,
    EXTERN = 309,
    STATIC = 310,
    AUTO = 311,
    REGISTER = 312,
    UNDERSCORE = 313,
    SINGLEQUOTE = 314,
    LPAREN = 315,
    RPAREN = 316,
    CHAR = 317,
    SHORT = 318,
    INT = 319,
    LONG = 320,
    SIGNED = 321,
    UNSIGNED = 322,
    FLOAT = 323,
    DOUBLE = 324,
    CONST = 325,
    VOLATILE = 326,
    VOID = 327,
    STRUCT = 328,
    UNION = 329,
    ENUM = 330,
    CORCHL = 331,
    CORCHR = 332,
    LBRACKET = 333,
    RBRACKET = 334,
    BACKSLASH = 335,
    COMMENTOPEN = 336,
    COMMENTCLOSE = 337,
    CASE = 338,
    DEFAULT = 339,
    IF = 340,
    ELSE = 341,
    SWITCH = 342,
    WHILE = 343,
    DO = 344,
    FOR = 345,
    GOTO = 346,
    CONTINUE = 347,
    BREAK = 348,
    RETURN = 349,
    UNCLOSEDCOMMENT = 350,
    COLON = 351,
    QUESTIONMARK = 352,
    NOT = 353,
    SEMICOLON = 354,
    COMMA = 355,
    PERIOD = 356,
    DOUBLEQUOTE = 357,
    IFSYS = 358,
    ELSESYS = 359,
    WHILELOOP = 360,
    FORLOOP = 361,
    PRINTF = 362,
    FPRINTF = 363,
    FOPEN = 364,
    FCLOSE = 365,
    SYSTEM = 366,
    STRCPY = 367,
    STRCMP = 368,
    EXIT = 369,
    TRUE = 370,
    FALSE = 371,
    TOUPPER = 372,
    FEOF = 373,
    GETC = 374,
    MEMSET = 375,
    CALLOC = 376,
    MALLOC = 377,
    NUMBER = 378,
    UNKNOWN = 379
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 251 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1269

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  149
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   379

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   136,     2,     2,     2,   138,   131,     2,
     125,   126,   132,   133,   130,   134,   129,   137,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   144,   146,
     139,   145,   140,   143,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   127,     2,   128,   141,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   147,   142,   148,   135,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    33,    34,    35,    39,    40,    41,    42,
      43,    44,    45,    46,    50,    51,    55,    56,    57,    58,
      59,    60,    64,    65,    66,    67,    68,    69,    73,    74,
      78,    79,    80,    81,    85,    86,    87,    91,    92,    93,
      97,    98,    99,   100,   101,   105,   106,   107,   111,   112,
     116,   117,   121,   122,   126,   127,   131,   132,   136,   137,
     141,   142,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   160,   161,   165,   169,   170,   174,   175,
     176,   177,   178,   179,   183,   184,   188,   189,   193,   194,
     195,   196,   197,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   216,   217,   218,   222,   223,
     227,   228,   232,   236,   237,   238,   239,   243,   244,   248,
     249,   250,   254,   255,   256,   260,   261,   265,   266,   270,
     271,   275,   276,   280,   281,   282,   283,   284,   285,   286,
     290,   291,   292,   293,   297,   298,   303,   304,   308,   309,
     313,   314,   315,   319,   320,   324,   325,   329,   330,   331,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   347,
     348,   349,   353,   354,   358,   359,   360,   361,   362,   363,
     367,   368,   369,   373,   374,   375,   376,   380,   381,   385,
     386,   390,   391,   395,   396,   397,   401,   402,   403,   404,
     408,   409,   410,   411,   412,   416,   417,   421,   422,   426,
     427,   428,   429
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "CONSTANT", "STRING", "SIZEOF",
  "DEFINE", "VALUE", "SPACE", "NEWLINE", "QUOTES", "LIBRARY", "CODIGO",
  "ARROW", "PLUSPLUS", "MINUSMINUS", "SHL", "SHR", "LEQ", "GEQ", "EQUAL",
  "NOTEQUAL", "DIVEQUAL", "MODEQUAL", "AND", "OR", "MUL", "DIV", "MOD",
  "PLUSEQUAL", "MULEQUAL", "ELLIPSIS", "INCLUDE", "PRINTSTRING",
  "MINUSEQUAL", "SHLEQUAL", "SHREQUAL", "ANDEQUAL", "FILENAME", "TAB",
  "LESSMORE", "ROOFEQUAL", "OREQUAL", "ASSIGN", "PLUS", "MINUS", "BITAND",
  "BITOR", "ROOF", "TAIL", "LESS", "GREATER", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "UNDERSCORE", "SINGLEQUOTE", "LPAREN",
  "RPAREN", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT",
  "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM",
  "CORCHL", "CORCHR", "LBRACKET", "RBRACKET", "BACKSLASH", "COMMENTOPEN",
  "COMMENTCLOSE", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "UNCLOSEDCOMMENT", "COLON",
  "QUESTIONMARK", "NOT", "SEMICOLON", "COMMA", "PERIOD", "DOUBLEQUOTE",
  "IFSYS", "ELSESYS", "WHILELOOP", "FORLOOP", "PRINTF", "FPRINTF", "FOPEN",
  "FCLOSE", "SYSTEM", "STRCPY", "STRCMP", "EXIT", "TRUE", "FALSE",
  "TOUPPER", "FEOF", "GETC", "MEMSET", "CALLOC", "MALLOC", "NUMBER",
  "UNKNOWN", "'('", "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'",
  "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'",
  "':'", "'='", "';'", "'{'", "'}'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,    40,    41,    91,    93,    46,
      44,    38,    42,    43,    45,   126,    33,    47,    37,    60,
      62,    94,   124,    63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -203

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-203)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     781,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
       2,    20,   -28,  -203,     5,  1171,  1171,  -203,     3,  -203,
    1171,  1044,   -71,    18,   861,  -203,  -203,  -131,    75,   -73,
    -203,  -203,   -28,  -203,   -86,  -203,  1018,  -203,  -203,   -55,
    1194,  -203,   255,  -203,     5,  -203,  1044,   224,   586,   -71,
    -203,  -203,    75,   -12,   -89,  -203,  -203,  -203,  -203,    20,
    -203,   505,  -203,  1044,  1194,  -203,  1194,   948,  -203,     9,
    1194,    10,  -203,  -203,   735,   776,   776,   817,    35,    -9,
      60,    67,   528,    86,   196,    70,    78,   554,   662,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,    93,   849,
     817,  -203,    56,   -88,    69,    50,    89,    95,    87,    73,
     212,   -19,  -203,  -203,   -78,  -203,  -203,  -203,   351,   369,
    -203,  -203,  -203,  -203,   105,  -203,  -203,  -203,  -203,    55,
     128,   126,  -203,     1,  -203,  -203,  -203,  -203,   136,   -82,
     817,    75,  -203,  -203,   505,  -203,  -203,  -203,   972,  -203,
    -203,  -203,   817,   -32,  -203,   122,  -203,   528,   662,  -203,
     817,  -203,  -203,   124,   528,   817,   817,   817,   185,   570,
     129,  -203,  -203,  -203,    -2,    65,   -52,   150,   279,  -203,
    -203,   628,   817,   280,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,   817,  -203,   817,   817,   817,
     817,   817,   817,   817,   817,   817,   817,   817,   817,   817,
     817,   817,   817,   817,   817,   817,   817,  -203,  -203,   462,
    -203,  -203,   901,   642,  -203,    21,  -203,    15,  -203,  1148,
    -203,   281,  -203,  -203,  -203,  -203,  -203,   -81,  -203,  -203,
       9,  -203,   817,  -203,   159,   528,  -203,    71,    72,    74,
     175,   570,  -203,  -203,  -203,  1068,    96,  -203,   817,  -203,
    -203,    82,  -203,   -51,  -203,  -203,  -203,  -203,  -203,    56,
      56,   -88,   -88,    69,    69,    69,    69,    50,    50,    89,
      95,    87,    73,   212,   -79,  -203,  -203,  -203,   176,   178,
    -203,   173,    15,  1104,   677,  -203,  -203,  -203,   394,  -203,
    -203,  -203,  -203,  -203,   528,   528,   528,   817,   693,  -203,
    -203,   817,  -203,   817,  -203,  -203,  -203,  -203,   179,  -203,
     186,  -203,  -203,   220,  -203,  -203,    83,   528,    84,  -203,
    -203,  -203,  -203,   528,   161,  -203,   528,  -203,  -203,  -203
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,    88,    89,    90,    91,    92,    94,    95,    96,
      97,   100,   101,    98,    99,   129,   130,    93,   108,   109,
       0,     0,   140,   208,     0,    78,    80,   102,     0,   103,
      82,     0,   132,     0,     0,   205,   207,   124,     0,     0,
     144,   142,   141,    76,     0,    84,    86,    79,    81,   107,
       0,    83,     0,   187,     0,   212,     0,     0,     0,   131,
       1,   206,     0,   127,     0,   125,   134,   145,   143,     0,
      77,     0,   210,     0,     0,   104,   114,     0,   110,     0,
     116,     2,     3,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,    26,    27,   191,   183,     6,    16,    28,
       0,    30,    34,    37,    40,    45,    48,    50,    52,    54,
      56,    58,    60,    73,     0,   189,   174,   175,     0,     0,
     176,   177,   178,   179,    86,   188,   211,   153,   139,   152,
       0,   146,   148,     0,     2,   136,    28,    75,     0,     0,
       0,     0,   122,    85,     0,   169,    87,   209,     0,   113,
     106,   111,     0,     0,   117,   119,   115,     0,     0,    20,
       0,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   202,   203,     0,     0,   155,     0,     0,    12,
      13,     0,     0,     0,    64,    65,    66,    63,    67,    68,
      69,    70,    71,    72,    62,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   185,     0,
     184,   190,     0,     0,   150,   157,   151,   158,   137,     0,
     138,     0,   135,   123,   128,   126,   172,     0,   105,   120,
       0,   112,     0,   180,     0,     0,   182,     0,     0,     0,
       0,     0,   200,   204,     5,     0,   157,   156,     0,    11,
       8,     0,    14,     0,    10,    61,    31,    32,    33,    35,
      36,    38,    39,    43,    44,    41,    42,    46,    47,    49,
      51,    53,    55,    57,     0,    74,   186,   165,     0,     0,
     161,     0,   159,     0,     0,   147,   149,   154,     0,   170,
     118,   121,    21,   181,     0,     0,     0,     0,     0,    29,
       9,     0,     7,     0,   166,   160,   162,   167,     0,   163,
       0,   171,   173,   193,   195,   196,     0,     0,     0,    15,
      59,   168,   164,     0,     0,   198,     0,   194,   197,   199
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -203,  -203,  -203,  -203,   -49,  -203,   -90,    34,    40,    19,
      28,   111,    92,    94,   109,    91,  -203,   -56,   -70,  -203,
     -87,   -47,    29,     0,  -203,   264,  -203,   911,  -203,  -203,
     260,   -62,   -48,  -203,    85,  -203,   274,   190,    49,    -7,
     -29,    -3,  -203,   -54,  -203,    98,  -203,   183,  -112,  -202,
    -132,  -203,   -74,  -203,    66,    30,   225,  -166,  -203,  -203,
    -203,  -203,   318,  -203
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   107,   108,   271,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   205,
     124,   148,    53,    54,    44,    45,    25,    26,    27,    28,
      77,    78,    79,   163,   164,    29,    64,    65,    30,    31,
      32,    33,    42,   298,   141,   142,   143,   187,   299,   237,
     156,   247,   125,   126,   127,    56,   129,   130,   131,   132,
     133,    34,    35,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      24,   155,   147,   140,    59,    37,    49,   224,     1,   146,
     184,   185,     1,   261,    39,   161,    62,    46,   178,    41,
     206,     1,   246,     1,     1,    47,    48,   236,   159,    23,
      51,   147,   166,   302,    24,   169,   171,   172,   146,    68,
     173,   151,    15,    16,    69,   210,   211,   134,   151,   308,
     186,   226,   226,    66,    57,   231,    58,   139,     1,   152,
      70,   146,   134,    23,   302,   323,   243,   309,   227,   214,
     215,    40,   165,   265,   267,   233,    73,   322,    63,   226,
      22,   185,   128,   185,   155,   135,   212,   213,   257,   258,
     259,    67,    74,   253,   147,   318,   161,    55,   250,    80,
     256,   146,   135,   244,    22,   273,   147,   188,   189,   190,
     218,   219,    72,   146,   251,   249,   175,   276,   277,   278,
     186,   272,   136,    80,   225,    80,    80,   240,   226,    80,
      21,   241,   234,   150,    21,   275,   235,    22,   294,   157,
     303,    22,   304,    21,   263,    21,   232,    80,   233,    38,
      50,    43,    22,   162,   167,   231,   295,   135,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   332,   147,   319,   174,
     232,   313,   233,   266,   146,   176,   301,    22,   207,   216,
     217,   264,   177,   208,   209,   226,   147,   314,   315,   180,
     316,   226,   226,   146,   226,   311,    59,    80,   320,   344,
     346,   179,   321,   226,   226,   222,   181,    80,   191,   146,
     192,   265,   193,   233,   182,    39,   220,   137,   221,   235,
     336,   338,   139,   283,   284,   285,   286,   223,   155,   139,
     333,   334,   335,   165,   279,   280,   287,   288,   147,   328,
      71,   339,   281,   282,   238,   146,   239,   330,    81,    82,
      83,    84,   266,   345,   242,   139,   252,   340,   255,   347,
      85,    86,   349,   260,   146,   262,   268,     2,     3,     4,
       5,     6,   269,   274,   307,   312,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     317,   326,   324,   139,   325,   341,   343,   348,     2,     3,
       4,     5,     6,   290,   342,   293,   291,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   289,   292,   153,   158,   310,   149,   306,    87,    88,
      89,   245,    90,    91,    92,    93,    94,    95,    96,    97,
     138,   254,    61,   229,    81,    82,    83,    84,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     0,    81,    82,    83,    84,     0,     0,     0,     0,
      98,     0,     0,     0,    85,    86,    99,   100,   101,   102,
     103,   104,     0,     0,     0,     0,     0,   144,    82,    83,
      84,   105,    52,   106,     2,     3,     4,     5,     6,    85,
      86,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,     0,    90,    91,
      92,    93,    94,    95,    96,    97,     0,     0,     0,     0,
       0,     0,    87,    88,    89,     0,    90,    91,    92,    93,
      94,    95,    96,    97,     0,    81,    82,    83,    84,     0,
       0,     0,     0,     0,     0,     0,    98,    85,    86,     0,
       0,     0,    99,   100,   101,   102,   103,   104,     0,     0,
       0,     0,     0,     0,    98,     0,     0,   105,    52,   228,
      99,   100,   101,   102,   103,   104,     0,     0,   144,    82,
      83,    84,     0,     0,     0,   105,    52,   230,     0,    98,
      85,    86,     0,     0,     0,    99,   100,   101,   102,   103,
     104,    81,    82,    83,    84,     0,     0,     0,     0,     0,
       0,   154,   331,    85,    86,    87,    88,    89,     0,    90,
      91,    92,    93,    94,    95,    96,    97,   144,    82,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,     0,     0,   144,    82,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    86,    98,     0,   144,
      82,    83,    84,    99,   100,   101,   102,   103,   104,     0,
       0,    85,    86,     0,     0,     0,     0,     0,   105,    52,
     296,    87,    88,    89,     0,    90,    91,    92,    93,    94,
      95,    96,    97,     0,     0,     0,     0,     0,     0,     0,
      98,   144,    82,    83,    84,     0,    99,   100,   101,   102,
     103,   104,     0,    85,    86,   144,    82,    83,    84,     0,
       0,     0,   154,    98,     0,     0,     0,    85,    86,    99,
     100,   101,   102,   103,   104,   144,    82,    83,    84,     0,
       0,     0,     0,     0,   105,    52,     0,    85,    86,    98,
     144,    82,    83,    84,     0,    99,   100,   101,   102,   103,
     104,     0,    85,    86,     0,    98,   144,    82,    83,    84,
     183,    99,   100,   101,   102,   103,   104,     0,    85,    86,
       0,    98,     0,     0,   145,    75,   105,    99,   100,   101,
     102,   103,   104,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   144,    82,
      83,    84,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,     0,    98,   270,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,     0,     0,    98,     0,     0,
     300,     0,     0,    99,   100,   101,   102,   103,   104,   144,
      82,    83,    84,     0,     1,     0,     0,    98,     0,     0,
       0,    85,    86,    99,   100,   101,   102,   103,   104,     0,
       0,     0,    98,     0,     0,   329,     0,     0,    99,   100,
     101,   102,   103,   104,     0,     0,     0,     0,    98,   337,
     144,    82,    83,    84,    99,   100,   101,   102,   103,   104,
       0,     0,    85,    86,     2,     3,     4,     5,     6,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
     168,    60,     0,     0,     1,     0,    99,   100,   101,   102,
     103,   104,   194,   195,     0,     0,     0,     0,     0,   196,
     197,     0,     0,     0,   198,   199,   200,   201,     0,     0,
       0,   202,   203,     0,     0,     0,     0,     0,     0,     0,
       0,   170,     0,     0,     1,     0,    21,    99,   100,   101,
     102,   103,   104,    22,     2,     3,     4,     5,     6,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,    98,     0,     0,     0,     0,     0,    99,   100,
     101,   102,   103,   104,     2,     3,     4,     5,     6,     0,
       0,    76,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    21,    76,    76,     0,
       0,    76,     0,    22,   204,     0,     0,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,    76,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,    75,   232,   297,   233,     0,
       0,     0,     0,    22,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     2,     3,     4,     5,     6,     0,     0,     0,    76,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,   160,     2,     3,     4,
       5,     6,     0,     0,     0,     0,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     248,     2,     3,     4,     5,     6,     0,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     0,    71,     0,    52,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     305,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,   265,   297,   233,     0,     0,     0,     0,
      22,     2,     3,     4,     5,     6,     0,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     2,     3,     4,     5,     6,     0,
     327,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    71,    58,    57,    33,     3,     3,    26,     3,    58,
      97,    98,     3,   179,    21,    77,   147,    24,    92,    22,
     110,     3,   154,     3,     3,    25,    26,   139,    76,     0,
      30,    87,    80,   235,    34,    84,    85,    86,    87,    42,
      87,   130,    70,    71,   130,   133,   134,    54,   130,   130,
      98,   130,   130,   126,   125,   129,   127,    57,     3,   148,
     146,   110,    69,    34,   266,   144,   148,   148,   146,    19,
      20,    22,    79,   125,   186,   127,    46,   128,     3,   130,
     132,   168,    52,   170,   154,    56,    17,    18,   175,   176,
     177,    42,   147,   167,   150,   261,   158,    31,   130,    50,
     174,   150,    73,   150,   132,   192,   162,    14,    15,    16,
      21,    22,    46,   162,   146,   162,   125,   207,   208,   209,
     168,   191,    56,    74,   143,    76,    77,   126,   130,    80,
     125,   130,   139,   145,   125,   205,   139,   132,   225,    73,
     125,   132,   127,   125,   146,   125,   125,    98,   127,   147,
     147,   146,   132,   144,   144,   229,   226,   128,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   308,   233,   268,   144,
     125,   255,   127,   186,   233,   125,   233,   132,   132,   139,
     140,   126,   125,   137,   138,   130,   252,   126,   126,     3,
     126,   130,   130,   252,   130,   252,   235,   158,   126,   126,
     126,   125,   130,   130,   130,   142,   146,   168,   125,   268,
     127,   125,   129,   127,   146,   232,   131,     3,   141,   232,
     317,   318,   232,   214,   215,   216,   217,    25,   308,   239,
     314,   315,   316,   250,   210,   211,   218,   219,   304,   303,
     145,   321,   212,   213,   126,   304,   130,   304,     3,     4,
       5,     6,   265,   337,   128,   265,   144,   323,   144,   343,
      15,    16,   346,    88,   323,   146,   126,    53,    54,    55,
      56,    57,     3,     3,     3,   126,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     125,   128,   126,   303,   126,   126,    86,   146,    53,    54,
      55,    56,    57,   221,   128,   224,   222,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,   220,   223,    69,    74,   250,    62,   239,    83,    84,
      85,   151,    87,    88,    89,    90,    91,    92,    93,    94,
     126,   168,    34,   128,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    15,    16,   131,   132,   133,   134,
     135,   136,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,   146,   147,   148,    53,    54,    55,    56,    57,    15,
      16,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    15,    16,    -1,
      -1,    -1,   131,   132,   133,   134,   135,   136,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,   146,   147,   148,
     131,   132,   133,   134,   135,   136,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,   146,   147,   148,    -1,   125,
      15,    16,    -1,    -1,    -1,   131,   132,   133,   134,   135,
     136,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,   147,   148,    15,    16,    83,    84,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    16,   125,    -1,     3,
       4,     5,     6,   131,   132,   133,   134,   135,   136,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    -1,   146,   147,
     148,    83,    84,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,     3,     4,     5,     6,    -1,   131,   132,   133,   134,
     135,   136,    -1,    15,    16,     3,     4,     5,     6,    -1,
      -1,    -1,   147,   125,    -1,    -1,    -1,    15,    16,   131,
     132,   133,   134,   135,   136,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,   146,   147,    -1,    15,    16,   125,
       3,     4,     5,     6,    -1,   131,   132,   133,   134,   135,
     136,    -1,    15,    16,    -1,   125,     3,     4,     5,     6,
     146,   131,   132,   133,   134,   135,   136,    -1,    15,    16,
      -1,   125,    -1,    -1,   128,    53,   146,   131,   132,   133,
     134,   135,   136,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    16,    -1,   125,   126,    -1,    -1,    -1,    -1,   131,
     132,   133,   134,   135,   136,    -1,    -1,   125,    -1,    -1,
     128,    -1,    -1,   131,   132,   133,   134,   135,   136,     3,
       4,     5,     6,    -1,     3,    -1,    -1,   125,    -1,    -1,
      -1,    15,    16,   131,   132,   133,   134,   135,   136,    -1,
      -1,    -1,   125,    -1,    -1,   128,    -1,    -1,   131,   132,
     133,   134,   135,   136,    -1,    -1,    -1,    -1,   125,   126,
       3,     4,     5,     6,   131,   132,   133,   134,   135,   136,
      -1,    -1,    15,    16,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
     125,     0,    -1,    -1,     3,    -1,   131,   132,   133,   134,
     135,   136,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,     3,    -1,   125,   131,   132,   133,
     134,   135,   136,   132,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,   136,    53,    54,    55,    56,    57,    -1,
      -1,    50,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,   125,    76,    77,    -1,
      -1,    80,    -1,   132,   145,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    53,   125,   126,   127,    -1,
      -1,    -1,    -1,   132,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    53,    54,    55,    56,    57,    -1,    -1,    -1,   168,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,   148,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     148,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    -1,   145,    -1,   147,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,
     132,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    53,    54,    55,    56,    57,    -1,
     126,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    54,    55,    56,    57,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,   125,   132,   171,   172,   175,   176,   177,   178,   184,
     187,   188,   189,   190,   210,   211,   212,     3,   147,   188,
     187,   190,   191,   146,   173,   174,   188,   172,   172,     3,
     147,   172,   147,   171,   172,   203,   204,   125,   127,   189,
       0,   211,   147,     3,   185,   186,   126,   187,   190,   130,
     146,   145,   203,   204,   147,    53,   176,   179,   180,   181,
     187,     3,     4,     5,     6,    15,    16,    83,    84,    85,
      87,    88,    89,    90,    91,    92,    93,    94,   125,   131,
     132,   133,   134,   135,   136,   146,   148,   150,   151,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   169,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   188,   171,   203,     3,   126,   172,
     192,   193,   194,   195,     3,   128,   153,   166,   170,   185,
     145,   130,   148,   174,   147,   167,   199,   203,   179,   181,
     148,   180,   144,   182,   183,   188,   181,   144,   125,   153,
     125,   153,   153,   170,   144,   125,   125,   125,   201,   125,
       3,   146,   146,   146,   169,   169,   181,   196,    14,    15,
      16,   125,   127,   129,    23,    24,    30,    31,    35,    36,
      37,    38,    42,    43,   145,   168,   155,   132,   137,   138,
     133,   134,    17,    18,    19,    20,   139,   140,    21,    22,
     131,   141,   142,    25,    26,   143,   130,   146,   148,   205,
     148,   201,   125,   127,   188,   190,   197,   198,   126,   130,
     126,   130,   128,   148,   170,   186,   199,   200,   148,   170,
     130,   146,   144,   201,   196,   144,   201,   169,   169,   169,
      88,   206,   146,   146,   126,   125,   190,   197,   126,     3,
     126,   152,   167,   169,     3,   167,   155,   155,   155,   156,
     156,   157,   157,   158,   158,   158,   158,   159,   159,   160,
     161,   162,   163,   164,   169,   167,   148,   126,   192,   197,
     128,   170,   198,   125,   127,    32,   194,     3,   130,   148,
     183,   170,   126,   201,   126,   126,   126,   125,   206,   155,
     126,   130,   128,   144,   126,   126,   128,   126,   192,   128,
     170,   148,   199,   201,   201,   201,   169,   126,   169,   167,
     166,   126,   128,    86,   126,   201,   126,   201,   146,   201
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   149,   150,   150,   150,   150,   151,   151,   151,   151,
     151,   151,   151,   151,   152,   152,   153,   153,   153,   153,
     153,   153,   154,   154,   154,   154,   154,   154,   155,   155,
     156,   156,   156,   156,   157,   157,   157,   158,   158,   158,
     159,   159,   159,   159,   159,   160,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   165,   165,   166,   166,
     167,   167,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   169,   169,   170,   171,   171,   172,   172,
     172,   172,   172,   172,   173,   173,   174,   174,   175,   175,
     175,   175,   175,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   177,   177,   177,   178,   178,
     179,   179,   180,   181,   181,   181,   181,   182,   182,   183,
     183,   183,   184,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   189,   189,   189,   189,   189,   189,   189,
     190,   190,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   194,   195,   195,   196,   196,   197,   197,   197,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   199,
     199,   199,   200,   200,   201,   201,   201,   201,   201,   201,
     202,   202,   202,   203,   203,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   207,   208,   208,   208,   208,
     209,   209,   209,   209,   209,   210,   210,   211,   211,   212,
     212,   212,   212
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2
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
      
#line 1810 "parser.tab.c" /* yacc.c:1646  */
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
#line 432 "parser.y" /* yacc.c:1906  */


/*C code */


int main( int argc, char *argv[] )
{
  char filename [100]="";
	printf( "Ingrese el archivo: ");
	scanf("%s",filename);
	yyin = fopen( filename, "r" );
  yyparse ();
}
