/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1031
Exercício   : 1031
Data        : 21/06/2026
Objetivo    : Achar o k para o 13 ser o ultimo numero eliminado da sequencia de tamanho n
Aprendizado : uso de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int wellington(int x, int k){
    int vetor[x];
    int posicao=0;
    int aux;
    int tamanho=x;
    for(int i = 0 ; i<x; i++){
        vetor[i]=i+1;
    }
    while(tamanho!=1){
        if(vetor[posicao]==13){
            for(int i = 0 ; i<x; i++){
                vetor[i]=i+1;
            }
            posicao=0;
            k++;
            tamanho=x;
        }
        
        vetor[posicao]=0;
        
        for(int j=posicao;j<tamanho-1;j++){
            aux=vetor[j];
            vetor[j]=vetor[j+1];
            vetor[j+1]=aux;
        }
        
        tamanho--;
        
        posicao=(posicao+k-1)%tamanho;
        
    }
    return k;
}

int main(){
    int n, r;
    do{
        scanf("%d", &n);
        if(n==0){
            break;
        }
        r = wellington(n, 1);
        printf("%d\n", r);
    }while(n!=0);
    return 0;
}
