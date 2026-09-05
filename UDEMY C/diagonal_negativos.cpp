#include <stdio.h>
#include <stdlib.h>


int main(){
	
	
	int N, i, j, qntNegativos;
	
	
	printf("Qual a ordem da matriz? ");
	scanf("%d", &N);
	
	int mat[N][N];
	
	for (i=0; i < N; i++){
		for(j=0; j < N; j++){
			printf("Elemento [%d,%d]: ", i,j);
			scanf("%d", &mat [i] [j]);
		}
	}
	
	printf("DIAGONAL PRINCIPAL: \n");
	
	for (i=0; i < N; i++){
		for(j=0; j < N; j++){ // ========================================================> mas precisaria tirar esse for 
			if (i==j){    //------------------------- OUTRA ALTERNATIVA printf("%d ", mat[i][i]); =====> Acessa [0,0], [1,1], [2,2]...
				printf("%d ", mat[i][j]);
			}
		}
	}
	/*
	MAIS EFICIENTE pois utiliza apenas 1 laço!!!!!
	for (i=0; i < N; i++){
		printf("%d ", mat[i][i]); // Acessa [0,0], [1,1], [2,2]...
	}
	
	*/
	
	
	qntNegativos = 0;
		for (i=0; i < N; i++){
		for(j=0; j < N; j++){
			if (mat[i][j] < 0){
				qntNegativos++;
			}
		}
	}
	
	printf("\nQUANTIDADE DE NEGATIVOS = %d\n", qntNegativos);		
		
		
		
	return 0;
}


