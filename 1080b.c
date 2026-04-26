/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Problema    : https://judge.beecrowd.com/en/problems/view/1080
Exercício   : 1080
Data        : 17/04/2026
Objetivo    : Ler e achar o maior de 100 números inteiros positivos
Aprendizado : uso de vetores simples
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int n[100];
    int i=0, maior=-1, v=-1;
    for(i=0;i<100;i++)
    scanf("%d", &n[i]);
    i=0;
    while(i<100){
        if (n[i]>maior){
            maior=n[i];
            v=i;
        }
        i++;
    }
    printf("%d\n", maior);
    printf("%d\n", v+1);
}
