/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1534
Exercício   : 1534
Data        : 14/05/2026
Objetivo    : escrever uma sequência de números usando matrizes
Aprendizado : uso de matrizes
-------------------------------------------------------------------------- */
#include <stdio.h>
int main(){
    int i, j, m[70][70], n;
    
    while (scanf("%d", &n) != EOF){ 
    
        for(i=0; i<n; i++){
           for(j=0; j<n; j++){
                if(j+1==n-i){
                   m[i][j]=2;
                } else if(i==j){
                    m[i][j]=1;
                } else{
                    m[i][j]=3;
                }
            }
        }
        
        for(i=0; i<n; i++){
            if(i>0){
                printf("\n");
           }
           for(j=0; j<n; j++){
                printf("%d", m[i] [j]);
            }
            if(i==n-1){
                printf("\n");
           }
        }
    }
}
