/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1046
Exercício   : 1046
Data        : 19/05/2026
Objetivo    : calcular a duração de um jogo
Aprendizado : uso de funções
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcularDuracao(int inicio, int fim){
    if(fim>inicio){
        return fim - inicio;
    }
    else if(inicio>fim){
        return 24-inicio+fim;
    }
    else{
        return 24;
    }
}
int main(){
    int x, inicio, fim;
    scanf("%d %d", &inicio, &fim);
    x = calcularDuracao(inicio, fim);
    printf("O JOGO DUROU %d HORA(S)\n", x);
    
    return 0;
}
