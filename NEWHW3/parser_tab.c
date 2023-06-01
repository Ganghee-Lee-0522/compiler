
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TIDEN	258
#define	TNUMBER	259
#define	TCONST	260
#define	TELSE	261
#define	TIF	262
#define	TINT	263
#define	TRETURN	264
#define	TVOID	265
#define	TWHILE	266
#define	TADDASSIGN	267
#define	TSUBASSIGN	268
#define	TMULASSIGN	269
#define	TDIVASSIGN	270
#define	TMODASSIGN	271
#define	TOR	272
#define	TAND	273
#define	TEQUAL	274
#define	TNOTEQU	275
#define	TGREAT	276
#define	TLESS	277
#define	TGREATE	278
#define	TLESSE	279
#define	TINC	280
#define	TDEC	281
#define	TPLUS	282
#define	TMINUS	283
#define	TMULTIPLY	284
#define	TDIVIDE	285
#define	TMOD	286
#define	TNOT	287
#define	TASSIGN	288
#define	TLPAREN	289
#define	TRPAREN	290
#define	TCOMMA	291
#define	TSEMICOLON	292
#define	TLBRACKET	293
#define	TRBRACKET	294
#define	TLBRACE	295
#define	TRBRACE	296
#define	TILLIDENT	297
#define	TLONG	298
#define	TOVER	299
#define	LOWER_THEN_ELSE	300

#line 1 "parser.y"

/*
* parser.y - yacc source for the MiniC
* Programmer - 최윤지 윤지윤 이강희
* date -  06 / 01 / 2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>

#include "glob.h"

 int type_int=0;
 int type_void=0;
 int param_int=0;



extern reporterror();
extern yylex();
extern yyerror(s);


#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		171
#define	YYFLAG		-32768
#define	YYNTBASE	46

#define YYTRANSLATE(x) ((unsigned)(x) <= 300 ? yytranslate[x] : 91)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    17,    19,    22,
    25,    28,    32,    34,    36,    39,    41,    43,    45,    47,
    49,    51,    53,    55,    57,    61,    63,    64,    66,    70,
    73,    78,    84,    86,    87,    89,    92,    96,   100,   102,
   106,   108,   112,   114,   119,   124,   126,   128,   130,   132,
   133,   135,   138,   141,   143,   145,   147,   149,   151,   154,
   157,   159,   160,   166,   174,   180,   184,   186,   188,   192,
   196,   200,   204,   208,   212,   214,   218,   220,   224,   226,
   230,   234,   236,   240,   244,   248,   252,   254,   258,   262,
   264,   268,   272,   276,   278,   281,   284,   287,   290,   292,
   297,   302,   305,   308,   310,   311,   313,   315,   319,   321,
   323
};

static const short yyrhs[] = {    47,
     0,    48,     0,    47,    48,     0,    49,     0,    64,     0,
     3,    37,     0,     3,     1,     0,    41,     0,    50,    61,
     0,    50,    37,     0,    50,     1,     0,    51,    56,    57,
     0,    52,     0,    53,     0,    52,    53,     0,    54,     0,
    55,     0,     5,     0,     8,     0,    10,     0,     3,     0,
    42,     0,    43,     0,    44,     0,    34,    58,    35,     0,
    59,     0,     0,    60,     0,    59,    36,    60,     0,    51,
    67,     0,    40,    62,    69,    41,     0,    40,    62,    69,
     1,    41,     0,    63,     0,     0,    64,     0,    63,    64,
     0,    51,    65,    37,     0,    51,    65,     1,     0,    66,
     0,    65,    36,    66,     0,    67,     0,    67,    33,     4,
     0,     3,     0,     3,    38,    68,    39,     0,     3,    38,
    68,     1,     0,    42,     0,    43,     0,     4,     0,    70,
     0,     0,    71,     0,    70,    71,     0,    70,    64,     0,
    61,     0,    72,     0,    74,     0,    75,     0,    76,     0,
    73,    37,     0,    77,     1,     0,    77,     0,     0,     7,
    34,    77,    35,    71,     0,     7,    34,    77,    35,    71,
     6,    71,     0,    11,    34,    77,    35,    71,     0,     9,
    73,    37,     0,    78,     0,    79,     0,    85,    33,    78,
     0,    85,    12,    78,     0,    85,    13,    78,     0,    85,
    14,    78,     0,    85,    15,    78,     0,    85,    16,    78,
     0,    80,     0,    79,    17,    80,     0,    81,     0,    80,
    18,    81,     0,    82,     0,    81,    19,    82,     0,    81,
    20,    82,     0,    83,     0,    82,    21,    83,     0,    82,
    22,    83,     0,    82,    23,    83,     0,    82,    24,    83,
     0,    84,     0,    83,    27,    84,     0,    83,    28,    84,
     0,    85,     0,    84,    29,    85,     0,    84,    30,    85,
     0,    84,    31,    85,     0,    86,     0,    28,    85,     0,
    32,    85,     0,    25,    85,     0,    26,    85,     0,    90,
     0,    86,    38,    77,    39,     0,    86,    34,    87,    35,
     0,    86,    25,     0,    86,    26,     0,    88,     0,     0,
    89,     0,    78,     0,    89,    36,    78,     0,     3,     0,
     4,     0,    34,    77,    35,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    39,    41,    42,    44,    45,    46,    47,    52,    59,    60,
    61,    68,    70,    72,    73,    75,    76,    78,    83,    84,
    87,   107,   108,   109,   114,   116,   117,   119,   120,   124,
   137,   138,   144,   145,   147,   148,   150,   155,   163,   164,
   166,   167,   169,   182,   193,   197,   198,   201,   204,   205,
   207,   208,   209,   211,   212,   213,   214,   215,   217,   218,
   224,   225,   227,   228,   230,   232,   234,   236,   237,   238,
   239,   240,   241,   242,   244,   245,   247,   248,   250,   251,
   252,   254,   255,   256,   257,   258,   260,   261,   262,   264,
   265,   266,   267,   269,   270,   271,   272,   273,   275,   276,
   277,   278,   279,   281,   282,   284,   286,   287,   289,   295,
   296
};

static const char * const yytname[] = {   "$","error","$undefined.","TIDEN",
"TNUMBER","TCONST","TELSE","TIF","TINT","TRETURN","TVOID","TWHILE","TADDASSIGN",
"TSUBASSIGN","TMULASSIGN","TDIVASSIGN","TMODASSIGN","TOR","TAND","TEQUAL","TNOTEQU",
"TGREAT","TLESS","TGREATE","TLESSE","TINC","TDEC","TPLUS","TMINUS","TMULTIPLY",
"TDIVIDE","TMOD","TNOT","TASSIGN","TLPAREN","TRPAREN","TCOMMA","TSEMICOLON",
"TLBRACKET","TRBRACKET","TLBRACE","TRBRACE","TILLIDENT","TLONG","TOVER","LOWER_THEN_ELSE",
"mini_c","translation_unit","external_dcl","function_def","function_header",
"dcl_spec","dcl_specifiers","dcl_specifier","type_qualifier","type_specifier",
"function_name","formal_param","opt_formal_param","formal_param_list","param_dcl",
"compound_st","opt_dcl_list","declaration_list","declaration","init_dcl_list",
"init_declarator","declarator","opt_number","opt_stat_list","statement_list",
"statement","expression_st","opt_expression","if_st","while_st","return_st",
"expression","assignment_exp","logical_or_exp","logical_and_exp","equality_exp",
"relational_exp","additive_exp","multiplicative_exp","unary_exp","postfix_exp",
"opt_actual_param","actual_param","actual_param_list","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    46,    47,    47,    48,    48,    48,    48,    48,    49,    49,
    49,    50,    51,    52,    52,    53,    53,    54,    55,    55,
    56,    56,    56,    56,    57,    58,    58,    59,    59,    60,
    61,    61,    62,    62,    63,    63,    64,    64,    65,    65,
    66,    66,    67,    67,    67,    67,    67,    68,    69,    69,
    70,    70,    70,    71,    71,    71,    71,    71,    72,    72,
    73,    73,    74,    74,    75,    76,    77,    78,    78,    78,
    78,    78,    78,    78,    79,    79,    80,    80,    81,    81,
    81,    82,    82,    82,    82,    82,    83,    83,    83,    84,
    84,    84,    84,    85,    85,    85,    85,    85,    86,    86,
    86,    86,    86,    87,    87,    88,    89,    89,    90,    90,
    90
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     1,     2,     2,
     2,     3,     1,     1,     2,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     3,     1,     0,     1,     3,     2,
     4,     5,     1,     0,     1,     2,     3,     3,     1,     3,
     1,     3,     1,     4,     4,     1,     1,     1,     1,     0,
     1,     2,     2,     1,     1,     1,     1,     1,     2,     2,
     1,     0,     5,     7,     5,     3,     1,     1,     3,     3,
     3,     3,     3,     3,     1,     3,     1,     3,     1,     3,
     3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
     3,     3,     3,     1,     2,     2,     2,     2,     1,     4,
     4,     2,     2,     1,     0,     1,     1,     3,     1,     1,
     3
};

static const short yydefact[] = {     0,
     0,    18,    19,    20,     8,     1,     2,     4,     0,     0,
    13,    14,    16,    17,     5,     7,     6,     3,    11,    10,
    34,     9,    43,    46,    47,    24,     0,     0,    39,    41,
    15,     0,    50,    33,    35,     0,    27,    12,    38,     0,
    37,     0,    43,    46,    47,   109,   110,     0,    62,     0,
     0,     0,     0,     0,     0,    54,     0,    49,    51,    55,
     0,    56,    57,    58,     0,    67,    68,    75,    77,    79,
    82,    87,    90,    94,    99,    36,    48,     0,     0,     0,
    26,    28,    40,    42,     0,     0,    61,     0,    97,    98,
    95,    96,     0,     0,    31,    53,    52,    59,    60,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   102,   103,
   105,     0,    45,    44,    30,    25,     0,     0,    66,     0,
   111,    32,    76,    90,    78,    80,    81,    83,    84,    85,
    86,    88,    89,    91,    92,    93,    70,    71,    72,    73,
    74,    69,   107,     0,   104,   106,     0,    29,    62,    62,
   101,     0,   100,    63,    65,   108,    62,    64,     0,     0,
     0
};

static const short yydefgoto[] = {   169,
     6,     7,     8,     9,    32,    11,    12,    13,    14,    27,
    38,    80,    81,    82,    56,    33,    34,    15,    28,    29,
    30,    78,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
   154,   155,   156,    75
};

static const short yypact[] = {    11,
    17,-32768,-32768,-32768,-32768,    11,-32768,-32768,     2,     1,
    24,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    24,-32768,    -3,   -29,    -6,-32768,     6,    14,-32768,    23,
-32768,     4,    89,    24,-32768,    77,    24,-32768,-32768,     4,
-32768,    81,    53,-32768,-32768,-32768,-32768,    65,   131,    67,
   131,   131,   131,   131,   131,-32768,    12,    79,-32768,-32768,
    69,-32768,-32768,-32768,    35,-32768,    91,    94,    29,   120,
    46,   107,    64,   114,-32768,-32768,-32768,    16,     4,    74,
    82,-32768,-32768,-32768,   131,    83,-32768,   131,-32768,-32768,
-32768,-32768,    87,    90,-32768,-32768,-32768,-32768,-32768,   131,
   131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
   131,   131,   131,   131,   131,   131,   131,   131,-32768,-32768,
   131,   131,-32768,-32768,-32768,-32768,    24,    98,-32768,   110,
-32768,-32768,    94,-32768,    29,   120,   120,    46,    46,    46,
    46,   107,   107,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   119,-32768,   122,   123,-32768,   121,   121,
-32768,   131,-32768,   154,-32768,-32768,   121,-32768,   164,   170,
-32768
};

static const short yypgoto[] = {-32768,
-32768,   165,-32768,-32768,     0,-32768,   161,-32768,-32768,-32768,
-32768,-32768,-32768,    47,   166,-32768,-32768,    -1,-32768,   133,
    97,-32768,-32768,-32768,   -57,-32768,   128,-32768,-32768,-32768,
   -47,   -91,-32768,    78,    80,    -8,    62,    42,   -42,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		181


static const short yytable[] = {    10,
    97,    87,    19,    23,   -22,    10,    43,    93,    89,    90,
    91,    92,    94,     1,    39,     2,   123,    16,     3,    35,
     4,   147,   148,   149,   150,   151,   152,   -23,     2,   153,
   -21,     3,    76,     4,    36,    99,    79,   128,    20,    37,
   130,    21,    24,    25,    26,    44,    45,   102,   103,    40,
    41,     5,    95,    17,   124,    42,    96,   134,   134,   134,
   134,   134,   134,   134,   134,   134,   134,   144,   145,   146,
   166,   -61,   108,   109,   157,   113,   114,   115,   116,   117,
    77,    46,    47,     2,    84,    48,     3,    49,     4,    50,
    36,    46,    47,   136,   137,    48,   118,    49,    85,    50,
    88,   164,   165,    51,    52,    98,    53,   100,   126,   168,
    54,   101,    55,    51,    52,   -62,    53,   127,    21,   129,
    54,   131,    55,    46,    47,   -62,    79,    48,    21,    49,
   132,    50,   159,    46,    47,   110,   111,   112,   119,   120,
   104,   105,   106,   107,   160,    51,    52,   121,    53,   142,
   143,   122,    54,   161,    55,    51,    52,   162,    53,   167,
    21,   163,    54,   170,    55,   138,   139,   140,   141,   171,
    18,    31,    83,   158,    22,   125,    86,   133,     0,     0,
   135
};

static const short yycheck[] = {     0,
    58,    49,     1,     3,    34,     6,     3,    55,    51,    52,
    53,    54,     1,     3,     1,     5,     1,     1,     8,    21,
    10,   113,   114,   115,   116,   117,   118,    34,     5,   121,
    34,     8,    34,    10,    38,     1,    37,    85,    37,    34,
    88,    40,    42,    43,    44,    42,    43,    19,    20,    36,
    37,    41,    41,    37,    39,    33,    58,   100,   101,   102,
   103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
   162,    37,    27,    28,   122,    12,    13,    14,    15,    16,
     4,     3,     4,     5,     4,     7,     8,     9,    10,    11,
    38,     3,     4,   102,   103,     7,    33,     9,    34,    11,
    34,   159,   160,    25,    26,    37,    28,    17,    35,   167,
    32,    18,    34,    25,    26,    37,    28,    36,    40,    37,
    32,    35,    34,     3,     4,    37,   127,     7,    40,     9,
    41,    11,    35,     3,     4,    29,    30,    31,    25,    26,
    21,    22,    23,    24,    35,    25,    26,    34,    28,   108,
   109,    38,    32,    35,    34,    25,    26,    36,    28,     6,
    40,    39,    32,     0,    34,   104,   105,   106,   107,     0,
     6,    11,    40,   127,     9,    79,    49,   100,    -1,    -1,
   101
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 7:
#line 48 "parser.y"
{
              yyerrok;
             reporterror(wrong_st); /* error - wrong statement */
       ;
    break;}
case 8:
#line 53 "parser.y"
{
                    yyerrok;
                    reporterror(nobrace);
              ;
    break;}
case 11:
#line 62 "parser.y"
{
                    yyerrok;
                    /* error - wrong function definition */
                    reporterror(wrong_funcdef);
                  ;
    break;}
case 19:
#line 83 "parser.y"
{type_int=1;;
    break;}
case 20:
#line 84 "parser.y"
{type_void=1;;
    break;}
case 21:
#line 89 "parser.y"
{

                /* identifier about parse error or not defined identifier/function*/
                  if(look_id->type==0||look_id->type==5){


                        if(type_void==1){
                              look_id->type=4; /* function, return type=void */
                        }else if(type_int==1){
                              look_id->type=6; /* function, return type=int */
                        }
                        type_int=0;
                        type_void=0;
                        look_tmp=look_id;
                  }
                  ;
    break;}
case 30:
#line 124 "parser.y"
{
                  if(type_int==1){ /* int의 경우 */
                        param_int=1;
                        look_id->type=7;  /* integer scalar parameter */
                  }
                  type_int=0;
                  type_void=0;

                  param_int=0;


;
    break;}
case 32:
#line 139 "parser.y"
{
                    yyerrok;
                    reporterror(nobrace);
              ;
    break;}
case 37:
#line 150 "parser.y"
{
                        type_int=0;
                        type_void=0;

                  ;
    break;}
case 38:
#line 155 "parser.y"
{
                        look_tmp->type=0; /* 예상치 못한 에러 발생  */
                        yyerrok;
                        type_int=0;
                        type_void=0;
                        reporterror(nosemi); /* no semicolon error */
                  ;
    break;}
case 43:
#line 169 "parser.y"
{
                  if(look_id->type==0){

                        if(type_int==1){
                              look_id->type=1; /* integer scalar variable */
                        }
                        else if(type_void==1)
                              look_id->type=2; /* void scalar variable */

                  }
                  look_tmp=look_id;

            ;
    break;}
case 44:
#line 183 "parser.y"
{

                  if(look_id->type==0){
                        if(type_int==1)look_id->type=3; /*  integer array variable */

                  }

                   look_tmp=look_id;

            ;
    break;}
case 45:
#line 193 "parser.y"
{
                  yyerrok;
                  reporterror(nobracket); /* no bracket error */
            ;
    break;}
case 60:
#line 219 "parser.y"
{
                        yyerrok;
                        reporterror(nosemi); /* no semicolon error */
                  ;
    break;}
case 109:
#line 290 "parser.y"
{
                  if(look_id->type==0)
                        look_id->type=5; /* not defined identifier/function */

            ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 299 "parser.y"
