%{
#include <stdio.h>
#include <stdlib.h>
#include "tn.h"
%}
%%
"//".*  ;
[A-Za-z_][A-Za-z0-9_]*  return(TIDENT);
[1-9][0-9]*|0([0-7]+|(x|X)[0-9A-Fa-f]*)?    return(TNUMBER);
"const" return(TCONST);
"else" return(TELSE);
"if" return(TIF);
"int" return(TINT);
"return" return(TRETURN);
"void" return(TVOID);
"while" return(TWHILE);
"+"
"-"
"*"
"/"
"%"
"="
"+=" return(TADDASSIGN);
"-=" return(TSUBASSIGN);
"*=" return(TMULASSIGN);
"/=" return(TDIVASSIGN);
"%=" return(TMODASSIGN);
"!"
"&&" return(TAND);
"||" return(TOR);
"==" return(TEQUAL);
"!=" return(TNOTEQU);
"<=" return(TLESSE);
">=" return(TGREATE);
"<" return(TLESSE);
">" return(TGREATE);
"++" return(TINC);
"--" return(TDEC);
[(),{}[];] ;
[ \t\n] ;
.   return(yytext[0]);
%%
int yywrap()
{
    printf("\n1976393 최윤지\n2076278 윤지윤\n2076285 이강희");
    return 1;
}
