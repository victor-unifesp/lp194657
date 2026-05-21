/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1179
Exercício   : 1179
Data        : 21/05/2026
Objetivo    : imprimir uma sequencia maior que a matriz dividindo entre pares e impares
Aprendizado : reaproveitar a memória
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, e=0, o=0, i, x;
    int pares[5], impares[5];
    for(i=0; i<15; i++){
        scanf("%d", &n);
        if(n%2==0){
            pares[e]=n;
            e++;
        }
        else{
            impares[o]=n;
            o++;
        }
        if(e==5){
            for(x=0; x<5;x++){
                printf("par[%d] = %d\n", x ,pares[x]);
            }
            e=0;
        }
        if(o==5){
            for(x=0; x<5;x++){
                printf("impar[%d] = %d\n", x ,impares[x]);
            }
            o=0;
        }
    }
    for(i=0; i<o;i++){
        printf("impar[%d] = %d\n", i ,impares[i]);
    }
    for(i=0; i<e;i++){
        printf("par[%d] = %d\n", i ,pares[i]);
    }
}
