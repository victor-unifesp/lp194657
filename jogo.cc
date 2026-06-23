#include<stdio.h>
void EscreverMatriz(int matriz[9][9]) {

	printf("   1 2 3   4 5 6   7 8 9\n");
	printf("  ———————————————————————\n");
	for(int i = 0 ; i<9 ; i++) {
		printf("%d|", i+1);
		for(int j = 0 ; j<9 ; j++) {
			if(j==2 || j==5) {
				if(matriz[i][j]!=0) {
					printf(" %d |", matriz[i][j]);
				}
				else {
					printf(" _ |", matriz[i][j]);
				}
			}
			else if((i==2 && j==8) || (i==5 && j==8)) {
				if(matriz[i][j]!=0) {
					printf(" %d\n", matriz[i][j]);
					printf("  ———————————————————————\n");
				}
				else {
					printf(" _\n", matriz[i][j]);
					printf("  ———————————————————————\n");
				}
			}
			else if(j==8) {
				if(matriz[i][j]!=0) {
					printf(" %d\n", matriz[i][j]);
				}
				else {
					printf(" _\n", matriz[i][j]);
				}
			}
			else {
				if(matriz[i][j]!=0) {
					printf(" %d", matriz[i][j]);
				}
				else {
					printf(" _", matriz[i][j]);
				}
			}
		}
	}
	printf("\n");
}

int resolver(int matriz[9][9]) {
	int c, l, i, j, bl, bc;
	for(l=0; l<9; l++) {
		for(c=0; c<9; c++) {
			for(i=0; i<9; i++) {
				if(c!=i && matriz[l][c]!=0) {
					if(matriz[l][c]==matriz[l][i]) {
						return 2;
					}
				}
				if(l!=i && matriz[l][c]!=0) {
					if(matriz[l][c]==matriz[i][c]) {
						return 2;
					}
				}
			}
		}
	}
	for(bl=0; bl<9; bl+=3) {
		for(bc=0; bc<9; bc+=3) {
			for(l=bl; l<bl+3; l++) {
				for(c=bc; c<bc+3; c++) {
					for(i=bl; i<bl+3; i++) {
						for(j=bc; j<bc+3; j++) {
							if((c!=j || l!=i) && matriz[l][c]==matriz[i][j] && matriz[l][c]!=0) {
								return 2;
							}
						}
					}
				}
			}
		}
	}
	return 1;
}

int main() {
	int matriz [9][9];
	int jogadas=0;
	int vidas=3;
	int x=0, y=0, z=0, r, aux;
	FILE *arquivo;
    char nomeArquivo[100];
    
    printf("Digite o nome do arquivo do tabuleiro (ex: input2.txt): ");
    scanf("%99s", nomeArquivo);
    
	arquivo = fopen(nomeArquivo, "r");

	if(arquivo == NULL) {
		printf("ERRO");
		return 1;
	}

	for(int i = 0 ; i<9 ; i++) {
		for(int j = 0 ; j<9 ; j++) {
			fscanf(arquivo, "%d", &matriz[i][j]);
		}
	}

	fclose(arquivo);
	
	if(resolver(matriz)==2){
	    printf("ERRO");
	    return 1;
	}

	for(int i = 0 ; i<9 ; i++) {
		for(int j = 0 ; j<9 ; j++) {
			if(matriz[i][j]==0) {
				jogadas++;
			}
		}
	}
	while(jogadas>0) {
		EscreverMatriz(matriz);
		printf("espaços em branco:%d // vidas restantes %d\n", jogadas, vidas);
		printf("qual linha e coluna deseja preencher?\n");
		printf("linha->");
		scanf("%d", &x);
		while(x>9||x<1) {
			printf("posição inválida!\n");
			printf("linha->");
			scanf("%d", &x);
		}
		printf("coluna->");
		scanf("%d", &y);
		while(y>9||y<1) {
			printf("posição inválida!\n");
			printf("coluna->");
			scanf("%d", &y);
		}
		while(matriz[x-1][y-1]!=0){
            printf("Essa coordenada já está preenchida!\n");
            printf("linha->");
            scanf("%d", &x);
            while(x>9||x<1) {
                printf("posição inválida!\n");
                printf("linha->");
                scanf("%d", &x);
            }
            printf("coluna->");
            scanf("%d", &y);
            while(y>9||y<1) {
                printf("posição inválida!\n");
                printf("coluna->");
                scanf("%d", &y);
            }
		}
		printf("qual número deseja inserir? ");
		scanf("%d", &z);
		while(z>9||z<1) {
			printf("jogada inválida!\n");
			printf("qual número deseja inserir? ");
			scanf("%d", &z);
		}
		aux = matriz[x-1][y-1];
		matriz[x-1][y-1]=z;
		r = resolver(matriz);
		if(r==2) {
			printf("\n\n     JOGADA ERRADA! \n\n");
			vidas--;
			if(vidas==0) {
				printf("Você perdeu! para tentar novamente execute outra vez.");
				return 0;
			}
			matriz[x-1][y-1]=aux;
		}
		else {
			jogadas--;
			if(jogadas>0) {
				printf("\n\n    BOA JOGADA!\n");
			}
			printf("\n");
		}
	}
	EscreverMatriz(matriz);
	printf("Parabéns, você venceu!");
	return 0;
}
