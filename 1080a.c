/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Problema    : https://judge.beecrowd.com/en/problems/view/1080
Data        : 17/04/2026
Objetivo    : Ler e achar o maior de 100 números inteiros positivos
Aprendizado : comparar grandes quantidades de números
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int i=0, maior=-1, v, aux;
    for(i=0;i<100;i++){
        scanf("%d", &aux);
        if (aux>maior){
            maior=aux;
            v=i+1;
        }
    }
    printf("%d\n%d\n", maior, v);
}
