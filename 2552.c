/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/2552
Exercício   : 2552
Data        : 19/06/2026
Objetivo    : identificar os elementos da matriz
Aprendizado : uso de matrizes
-------------------------------------------------------------------------- */
#include <stdio.h>

void resolver (int matriz[100][100],int l , int c){
    int x=1;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(matriz[i][j]==1){
                matriz[i][j]=9;
            }
        }
    }
    
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(matriz[i][j]==0){
                if(i-1>=0){
                    if(matriz[i-1][j]==9){
                        matriz[i][j]++;
                    }
                }
                if(i+1<l){
                    if(matriz[i+1][j]==9){
                        matriz[i][j]++;
                    }
                }
                if(j-1>=0){
                    if(matriz[i][j-1]==9){
                        matriz[i][j]++;
                    }
                }
                if(j+1<c){
                    if(matriz[i][j+1]==9){
                      matriz[i][j]++;
                    }
                }
            }
        }
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d", matriz[i][j]);
            if(j==c-1){
                printf("\n");
            }
        }
    }
}

int main(){
    int l, c, matriz[100][100];
    while (scanf("%d %d", &l, &c) != EOF) {
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                scanf("%d", &matriz[i][j]);
            }
        }
        resolver(matriz, l, c);
    }
}
