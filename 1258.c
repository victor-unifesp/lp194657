/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/11258
Exercício   : 1258
Data        : 21/05/2026
Objetivo    : Separar camisas por ordem
Aprendizado : uso de qsort, struct e ponteiros
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct blusa {
    char nome[50];
    char tam;
    char cor[20];
};

    typedef struct blusa blusa;
    
int comparar(const void *x, const void *y) {
    const blusa *a = (const blusa *)x;
    const blusa *b = (const blusa *)y;

    int c_cor = strcmp(a->cor, b->cor);
    if (c_cor != 0) return c_cor;

    if (a->tam != b->tam) {
        return b->tam - a->tam; 
    }

    return strcmp(a->nome, b->nome);
}

int main()
{
    int n;
    blusa V[60];
    scanf("%d", &n);
    getchar();
    while(n!=0){    
        for(int i = 0; i<n; i++){
            
            fgets(V[i].nome, 50, stdin);
            V[i].nome[strcspn(V[i].nome, "\n")] = '\0';
            
            scanf("%s %c", V[i].cor, &V[i].tam);
            getchar();
        }
        
        qsort(V, n, sizeof(blusa), comparar);
        
        for ( int i=0; i<n; i++) {
            printf("%s %c %s\n", V[i].cor, V[i].tam, V[i].nome);
        }
        
        scanf("%d", &n);
        if(n!=0){
            printf("\n");
        }
        getchar();
    }
}
