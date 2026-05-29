/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1169
Exercício   : 1169
Data        : 29/05/2026
Objetivo    : achar o número de grãos em cada peça do tabuleiro
Aprendizado : uso de linguagem recursiva e unsigned long long
-------------------------------------------------------------------------- */

#include <stdio.h>

void resolver(int n) {
    if (n == 0) return;

    int x;
    scanf("%d", &x);

    unsigned long long graos = ((1ULL << (x - 1)) - 1) * 2 + 1;
    unsigned long long kg = graos / 12000;
    
    printf("%llu kg\n", kg);

    resolver(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    resolver(n);
    return 0;
}
