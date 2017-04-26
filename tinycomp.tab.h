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

#ifndef YY_YY_TINYCOMP_TAB_H_INCLUDED
# define YY_YY_TINYCOMP_TAB_H_INCLUDED
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
    INTEGER = 259,
    FLOAT = 260,
    TYPE = 261,
    FRACTION = 262,
    STAT = 263,
    TRUE = 264,
    FALSE = 265,
    WHILE = 266,
    IF = 267,
    PRINT = 268,
    THEN = 269,
    ELSE = 270,
    OR = 271,
    AND = 272,
    GE = 273,
    LE = 274,
    EQ = 275,
    NE = 276,
    UMINUS = 277,
    assign = 278,
    EXACT = 279
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 40 "tinycomp.y" /* yacc.c:1909  */

	/* tokens for constants */
	int iValue;					/* integer value */
	float fValue;		     /* float value */
	fraction fracValue;		/* Fraction value */

	/* tokens for other lexemes (var id's and generic lexemes) */
	char idLexeme;				/* identifiers */
	typeName typeLexeme;		/* lexemes for type id's */

	/* types for other syntactical elements: typically, attributes of the symbols */
	Attribute* attrs;			/* attributes for nonterminals */
	int inhAttr;    			/* inherited attribute storing address */

#line 94 "tinycomp.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TINYCOMP_TAB_H_INCLUDED  */
