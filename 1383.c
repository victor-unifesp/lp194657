int resolver(int matriz[9][9]) {
	int c, l, i, j, bl, bc;
	for(l=0; l<9; l++){
        for(c=0; c<9; c++){
            for(i=0; i<9; i++){
                if(c!=i){
                    if(matriz[l][c]==matriz[l][i]){
                        return 2;
                    }
                }
                if(l!=i){
                    if(matriz[l][c]==matriz[i][c]){
                        return 2;
                    }
                }
            }
		}
	}
   for(bl=0; bl<9; bl+=3){
       for(bc=0;bc<9;bc+=3){
           for(l=bl;l<bl+3;l++){
               for(c=bc;c<bc+3;c++){
                    for(i=bl;i<bl+3;i++){
                        for(j=bc;j<bc+3;j++){
                            if((c!=j || l!=i) && matriz[l][c]==matriz[i][j]){
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



#include <stdio.h>

int main()
{
	int n, l, c, sudoku[9][9], resposta;
	scanf("%d", &n);
	for(int i = 0; i<n; i++) {
		for(l=0; l<9; l++) {
			for(c=0; c<9; c++) {
				scanf("%d", &sudoku[l][c]);
			}
		}
		resposta = resolver(sudoku);
        if(resposta==1){
           printf("Instancia %d\nSIM\n\n", i + 1);
        }
        if(resposta==2){
           printf("Instancia %d\nNAO\n\n", i + 1);
        }
    }
	return 0;
}
