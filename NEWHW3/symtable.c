/*
* symtable.c – identifier들의 hashcode를 계산하고 st에 삽입
* progrmmer – 최윤지, 윤지윤, 이강희
* date – 06 / 01 / 2023
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include "glob.h"
#include "tn.h"



/* PrintHStable -
* hash table을 형식에 맞추어 출력
*/
void PrintHStable()
{
    HTpointer here;
    int i, j;

    printf("\n[[HASH TABLE]]\n");
    printf("==================================================================================\n");

    for (i = 0; i < HTsize; i++) {
        if (HT[i] != NULL) {
            here = HT[i];
            do {
                printf("Hash Code%4d : (", i);
                for (j = here->index; ST[j] != '\0'; j++) printf("%c", ST[j]);
                printf(" : ");

                switch (here->type) {
                    //int variable
                case 1: printf("integer scalar variable, line%d)\n", here->cLine); break;
                    //void variable
                case 2: printf("void scalar variable, line%d)\n", here->cLine); break;
                    //array(int) variable
                case 3: printf("integer array variable, line%d)\n", here->cLine); break;
                    //void function
                case 4: printf("function, return type=void, line%d)\n", here->cLine); break;
                    //not define
                case 5: printf("not defined identifier/function, line%d)\n", here->cLine); break;
                    //int function
                case 6: printf("function, return type=int, line%d)\n", here->cLine); break;
                    //int scalar parameter
                case 7: printf("integer scalar parameter, line%d)\n", here->cLine); break;


                default: printf("identifier about parse error, line%d)\n", here->cLine); break;
                }
                here = here->next;
            } while (here != NULL);
        }



    }
    printf("==================================================================================\n");


}

//identifier의 hash code들을 모두 더하여 modulo연산을 수행
void ComputeHS(int nid, int nfree) {
    int code, i;
    code = 0;
    for (i = nid; i < nfree - 1; i++) {
        code += (int)ST[i];   //hash code더하기
    }
    hashcode = code % HTsize;   //modulo
}


//identifier가 이전에 삽입된 적 있는지 살펴봄 이미 존재한다면 ST에 이미 존재하는 시작 index를 불러옴

void LookupHS(int nid, int hscode) {
    HTpointer here;
    int i, j;
    found = FALSE;
    if (HT[hscode] != NULL) {
        here = HT[hscode];
        while (here != NULL && found == FALSE) {
            found = TRUE;
            i = here->index;
            j = nid;
            sameid = i;
            while (ST[i] != '\0' && found == TRUE) {
                if (ST[i] != ST[j]) {
                    found = FALSE;
                }
                else {
                    i++;
                    j++;
                }
            }
            here = here->next;
        }
    }
}



void ADDHT(int hscode){
//hash table에 새로운 identifier를 추가
//null이었으면 바로 추가하고, 이미 존재한다면 linked list로 연결
    HTpointer tmp;


    if (HT[hscode] == NULL) {
        tmp = (HTpointer)malloc(sizeof(struct HTentry));
        tmp->type = 0;
        tmp->next = NULL;
        tmp->cLine = cLine;
        HT[hscode] = tmp;
        tmp->index = nextid;
    }
    else {
        tmp = (HTpointer)malloc(sizeof(struct HTentry));
        tmp->type = 0;
        tmp->index = nextid;
        tmp->next = HT[hscode];
        tmp->cLine = cLine;
        HT[hscode] = tmp;
    }
    look_id = tmp;


}





//메인 함수
int SymbolTable()
{

    nextid = nextfree;

    // yytext 한글자씩 ST에 넣음
    for (int i = 0; i < yyleng; i++) {
        ST[nextfree++] = yytext[i];
    }
    // identifier를 다 넣은 후
    ST[nextfree++] = '\0';

    // HS계산, 각 identifer에 대해, hastable에 이미 있는지 확인
    ComputeHS(nextid, nextfree);
    LookupHS(nextid, hashcode);

    //처음 등장한 identifier일 경우
    if (!found) {
        ADDHT(hashcode); // HT 삽입
    }
    //identifier가 이미 존재하는 경우

    else {
        nextfree = nextid; //이번에 ST에 읽은 identifier를 다음에 덮어씀
    }

    //ST overflow 발생 시
    if (nextfree == STsize) {
        reporterror(toverflow);
        PrintHStable();
        exit(1);
    }






    /*ST출력
    printf("===ST===\n");
    for (int i = 0; i < nextfree; i++) {
    if (ST[i] == '\0') printf("\n");
    else printf("%c", ST[i]);
    }
    printf("\n\n\n");
    */

}
