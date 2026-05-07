/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : criptografar n textos
Aprendizado : manipulação de strings e vetores.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
	int i, n, l, tamanho;
	char text[1001], aux;
	scanf("%d", &n);
	getchar();
	printf("%d\n", n);
	while(n>0) {
		fgets(text, 1001, stdin);
		text[strcspn(text,"\n")] = '\0';
		tamanho=strlen(text);
		for(i=0; text[i]!='\0'; i++) {
			if(text[i] >= 'A' && text[i] <= 'Z' || text[i] >= 'a' && text[i] <= 'z' ) {
			    text[i]=text[i]+3;
			}
		}
		for(i=0; i<tamanho/2 ; i++) {
			aux = text[i];
			text[i]=text[tamanho-i-1];
			text[tamanho-1-i]=aux;
		}

		for(i=tamanho/2; text[i]!='\0' ; i++) {
			text[i]=text[i]-1;
		}
		printf("%s\n", text);
		n--;
	}
}
