/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1234
Exercício   : 1234
Data        : 26/04/2026
Objetivo    : formar uma sequência dançante
Aprendizado : uso de strings e while como forma de ler input de umma forma completa
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <ctype.h>

int main(){
    int i=0, r=0;
    char t[51];
    while (fgets(t, 51, stdin) != NULL) {
        r=0;
        for(i=0; t[i]!='\0'; i++){
            if(t[i]==' ' || t[i] == '\n' || t[i] == '\r'){
                continue;
            }
                else if(r%2==0){
                        t[i]=toupper(t[i]);
                    }
                else{
                        t[i]=tolower(t[i]);
                    }
                r++;    
        }
        printf("%s", t);
    }
