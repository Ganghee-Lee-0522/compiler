%{
#include <stdio.h>
#include <stdlib.h>
#include "tn.h"
#include "glob.h"
extern reporterror(enum tnumber tn); /*에러 출력하는 함수*/
%}

A	[a-zA-Z_] 
D	[0-9] 
%%

"const" return(TCONST);
"else" return(TELSE);
"if" return(TIF);
"int" return(TINT);
"return" return(TRETURN);
"void" return(TVOID);
"while" return(TWHILE);
"\n" linenum++;
"//".*  return(TCMT);
{A}({A}|{D})* {
    if(yyleng>MaxIdentLen){ 
        reporterror(TOOLONG);
    }
    else {
        return(TIDENT);
    }
}
{D}({A}|{D})*{A}({A}|{D})* { 
reporterror(ILLID);
}
{D}+	return(TNUMBER);
"+"  return(TADD);
"-" return(TSUB);
"*" return(TMUL);
"/" return(TDIV);
"%" return(TMOD);
"=" return(TOP);
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
"("  return(TBRASL);
")"  return(TBRASR);
"{"  return(TBRAML);
"}"  return(TBRAMR);
"["  return(TBRALL);
"]"  return(TBRALR);
","  return(TCOMMA);
";"  return(TSEMICOLON);
[ \t\n] return(TSPACE);
.   reporterror(ILLSP);
%%
int yywrap()
{
    return 1;
}
