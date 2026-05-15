/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1534
Exercício   : 1534
Data        : 15/05/2026
Objetivo    : imprimir uma sequencia especifica na matriz
Aprendizado : uso de ponteiros
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int *matriz = (int *)malloc(n * n * sizeof(int));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int *pAtual = (matriz + (i * n + j));
                if (i + j == n - 1) {
                    *pAtual = 2;
                } 
                else if (i == j) {
                    *pAtual = 1;
                } 
                else {
                    *pAtual = 3;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", *(matriz + (i * n + j)));
            }
            printf("\n");
        }
        free(matriz);
    }
    return 0;
}
