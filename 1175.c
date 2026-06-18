/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1180
Exercício   : 1180
Data        : 18/06/2026
Objetivo    : inveter um vetor de 20 posicoes
Aprendizado : reforço de vetores
-------------------------------------------------------------------------- */
#include <stdio.h> 

int main (){
    int aux, vetor[20];
    for(int i=0; i<20;i++){
        scanf("%d", &vetor[i]);
    }
    for(int i=0;i<10;i++){
        aux=vetor[i];
        vetor[i]=vetor[19-i];
        vetor[19-i]=aux;
    }
    for(int i=0;i<20;i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }
}
