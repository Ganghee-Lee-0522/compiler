%{
/* scanner.l - lexical analyzer for the MiniC
* programmer – 최윤지, 윤지윤, 이강희
* date – 04/27/2023 
*/
#include <stdio.h>
#include <stdlib.h>
#include "tn.h"
#include "glob.h"
extern reporterror(enum tnumber tn); /*에러 출력하는 함수*/
%}

A	[a-zA-Z_] 
D	[0-9] 
%%

 /*
 * Keyword
 */

"const" return(TCONST);
"else" return(TELSE);
"if" return(TIF);
"int" return(TINT);
"return" return(TRETURN);
"void" return(TVOID);
"while" return(TWHILE);



 /*
 * 주석
 */
"//".*  return(TCMT);

 /*
 * Identifier MacIdentLen(10)보다 크면 에러
 */
{A}({A}|{D})* {
    if(yyleng>MaxIdentLen){ 
        reporterror(TOOLONG);
    }
    else {
        SymbolTable();
    }
}

 /*
 * 숫자로 시작하는 Identifier는 에러
 */
{D}({A}|{D})*{A}({A}|{D})* { 
reporterror(ILLID);
}

 /*
 * constant
 */
{D}+	return(TNUMBER);

 /*
 * operator
 */
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

 /*
 * Special Symbols
 */
"("  return(TBRASL);
")"  return(TBRASR);
"{"  return(TBRAML);
"}"  return(TBRAMR);
"["  return(TBRALL);
"]"  return(TBRALR);
","  return(TCOMMA);
";"  return(TSEMICOLON);

 /*
 * white spaces
 */
[ ] return(TSPACE);
[\t] return(TTAB);
 /*
 * 줄바꿈 시 줄 갯수 1 증가 + '/n'은 white space 이므로 TLINE 리턴
 */
[\n] {linenum++;
return(TLINE);}

 /*
 * 나머지 경우는 에러, 유효하지 않은 문자가 포함된 
 */
.   reporterror(ILLSP);
%%
int yywrap()
{
    return 1;
}
