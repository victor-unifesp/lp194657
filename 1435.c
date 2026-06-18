/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1435
Exercício   : 1435
Data        : 18/06/2026
Objetivo    : desenhar uma matriz quadrada de ordem n preenchida com números inteiros em um formato de "camadas"
Aprendizado : uso de matrizes
-------------------------------------------------------------------------- */
#include <stdio.h>

int resolver (int x){
    int matriz[100][100];
    int inicio=0;
    int fim = x-1;
    int valor = 1;
    
    while(inicio<=fim){
        for (int j = inicio; j <= fim; j++) {
            matriz[inicio][j] = valor; 
            matriz[j][inicio] = valor; 
            matriz[fim][j] = valor;    
            matriz[j][fim] = valor;
        }
        inicio++;
        fim--;
        valor++;
    }
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            if(j == x-1){
                printf("%3d\n", matriz[i][j]);
            } else {
                printf("%3d ", matriz[i][j]);
            }
        }    
    }
    printf("\n");
}

int main(){
    int n;
    do{
        scanf("%d", &n);
        if(n==0){
            break;
        }
        resolver(n);
    }while (n!=0);
    return 0;
}
