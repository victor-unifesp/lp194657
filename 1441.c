/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1383
Exercício   : 1383
Data        : 18/06/2026
Objetivo    : verificar se a matriz 9x9 é de fato um jogo de sudoku possivel
Aprendizado : uso de loops
-------------------------------------------------------------------------- */
#include <stdio.h>

int hailstone (int x, int maior){
    if(x==1){
        return maior;
    }
    if(x%2==0){
        x=x/2;
    } 
    else{
        x=x*3+1;
    }
    if(x>maior){
        maior=x;
    }
    return hailstone(x, maior);
}

int main(){
    int n, resposta;
    do{
        scanf("%d", &n);
        if(n==0){
            break;
        }
        resposta = hailstone(n, n);
        printf("%d\n", resposta);
    }while (n!=0);
}
