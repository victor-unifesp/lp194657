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

unsigned long long resolver(int x) {
    if (x == 0){
     unsigned long long graos = 1;
     return graos;    
    }
    
    unsigned long long graos = 2*resolver(x-1);
    
    
    return graos;
}

int main() {
    int n, x;
    unsigned long long g, kg;
    scanf("%d", &n);
    while(n>0){
        scanf("%d", &x);
        
        if (x == 64) {
            g = (resolver(63) - 1) * 2 + 1;
        } else {
        
            g = resolver(x) - 1;
        }
        
        kg = g / 12000;
        printf("%llu kg\n", kg);
        n--;
    }
    return 0;
}
