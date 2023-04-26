%{
#include <stdio.h>
#include <stdlib.h>
#include "tn.h"
extern int linenum;
extern reporterror(enum tnumber tn);
%}
%%
"const" return(TCONST);
"else" return(TELSE);
"if" return(TIF);
"int" return(TINT);
"return" return(TRETURN);
"void" return(TVOID);
"while" return(TWHILE);
"+"  return(TADD);
"-" return(TSUB);
"*" return(TMUL);
"/" return(TDIV);
"%" return(TMOD);
"=" return(TOP)
"+=" return(TADDASSIGN);
"-=" return(TSUBASSIGN);
"*=" return(TMULASSIGN);
"/=" return(TDIVASSIGN);
"%=" return(TMODASSIGN);
"!"  return(TNOT);
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
[A-Za-z_][A-Za-z0-9_]* {
    if(yyleng>10){
        reporterror(TOOLONG);
    }return(TIDENT)};
[0-9]+	return(TNUMBER);
"("  return(TBRASL);
")"  return(TBRASR);
"{"  return(TBRAML);
"}"  return(TBRAMR);
"["  return(TBRALL);
"]"  return(TBRALR);
","  return(TCOMMA);
";"  return(TSEMICOLON);
"//".*  return(TCMT);
"\n" linenum++;
[ \t\n] return(TSPACE);
.   reporterror(ILLSP);
%%
int yywrap()
{
    printf("\n1976393 최윤지\n2076278 윤지윤\n2076285 이강희");
    return 1;
}
