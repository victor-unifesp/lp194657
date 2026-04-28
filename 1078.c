/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : fazer a tabuada de um valor N
Aprendizado : multiplicar números
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int a, b=1 , c;
    scanf("%d", &a);
    while (b<=10){
        c=a*b;
        printf("%d x %d = %d\n", b, a, c);
        b++;
    }
}
