/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/tournaments/rank/10139
Exercício   : 2757
Data        : 11/04/2026
Objetivo    : Ler três valores e escrever de diferentes formas
Aprendizado : Distanciar variaveis usando ferramentas
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("A = %d, B = %d, C = %d\n", a, b, c);
    printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
    printf("A = %010d, B = %010d, C = %010d\n", a, b, c);
    printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);
 }
