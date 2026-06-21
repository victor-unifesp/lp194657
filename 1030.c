/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1030
Exercício   : 1030
Data        : 21/06/2026
Objetivo    : Achar o sobrevivente de x pessoas pulando k casas
Aprendizado : uso de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int Josef(int x, int k){
    int vetor[x];
    int posicao=0;
    int aux;
    int tamanho=x;
    for(int i = 0 ; i<x; i++){
        vetor[i]=i+1;
    }
    while(tamanho!=1){
        posicao=(posicao+k-1)%tamanho;
        vetor[posicao]=0;
        for(int j=posicao;j<tamanho-1;j++){
            aux=vetor[j];
            vetor[j]=vetor[j+1];
            vetor[j+1]=aux;
        }
        tamanho--;
    }
    return vetor[0];
}

int main(){
    int n, x, k, r;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &k);
        r = Josef(x, k);
        printf("Case %d: %d\n", i+1, r);
    }
    return 0;
}
