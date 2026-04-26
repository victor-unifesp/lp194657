/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1013
Exercício   : 1013
Data        : 07/04/2026
Objetivo    : Ler três valores inteiros e mostrar o maior.
Aprendizado : Realizar comparações e uso do if
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    
    scanf("%d %d %d", &A, &B, &C);
    
    if(A>B && A>C){
        printf("%d eh o maior\n", A);
    }
    else if (B>C){
    printf("%d eh o maior\n", B);
    }
    else{
    printf("%d eh o maior\n", C);
    }
    
   
}
