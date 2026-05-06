/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1241
Exercício   : 1241
Data        : 05/05/2026
Objetivo    : comparar o final de duas sequências numéricas
Aprendizado : usar números no char
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, o, tamA, tamB;
	char A[1001], B[1001];
	scanf("%d", &n);
	while(n>0) {
		scanf("%s %s", A, B);
		tamA=strlen(A);
		tamB=strlen(B);
		if(tamB>tamA) {
			printf("nao encaixa\n");
		} else {
			for(i=0; i< tamB; i++) {
				if(B[tamB-i-1]!=A[tamA-i-1]) {
					break;
				}
			}
			if(i==tamB) {
				printf("encaixa\n");
			} else {
			    printf("nao encaixa\n");
			}
		}
		n--;
	}
	return 0;
}
