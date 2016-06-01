/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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

#endif /* !YY_YY_PARSER_H_INCLUDED  */
