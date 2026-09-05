/*
3. Matriz + Procedure: Crie uma procedure void preencherMatriz(int matriz[][5], int
linhas) que recebe uma matriz de inteiros e o número de linhas, e solicita ao usuário
que digite os valores para preenchê-la. 
*/


#include <stdio.h>
#include <stdlib.h>
// A procedure recebe a matriz (com 5 colunas) e o número de linhas
void preencherMatriz(int matriz[][5], int linhas){
		
	printf("VAMOS PREENCHER A MATRIZ AGORA \n");
	

	for(int i = 0; i < linhas; i++){
	    for(int j = 0; j < 5; j++){ // Loop de DENTRO: Preenche todas as COLUNAS (de 0 a 4) DESSA linha
		// Pede o valor para a célula [i][j]
		printf("Digite o valor para [Linha %d][Coluna %d]: ", i, j);
		scanf("%d", &matriz[i][j]); // Salva na posição correta
		}
	}
}



int main(){
	
	int N;
	
	printf("===== VAMOS CRIAR A SUA MATRIZ ======\n");
	printf("Quantas linhas tera a matriz? ");
	scanf("%d", &N);
	
		
	
	int minhaMatriz [N][5];
	
	preencherMatriz (minhaMatriz, N);
	
	
	
	
	return 0;
}
