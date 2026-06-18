/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1180
Exercício   : 1180
Data        : 18/06/2026
Objetivo    : achar o menor valor de um vetor com n posicoes
Aprendizado : reforço de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

struct dados{
    int menor;
    int posicao;
};
typedef struct dados dados;

dados resolver(int x){
    int vetor[1000];
    dados resposta;
    
    for(int i=0;i<x;i++){
        scanf("%d", &vetor[i]);
    }
    resposta.menor=vetor[0];
    for(int i=0;i<x;i++){
        if(vetor[i]<resposta.menor){
            resposta.menor=vetor[i];
            resposta.posicao=i;
        }
    }
    return resposta;
}


int main(){
    int n;
    dados resposta;
    scanf("%d", &n);
    resposta = resolver(n);
    printf("Menor valor: %d\nPosicao: %d\n", resposta.menor, resposta.posicao);
}
