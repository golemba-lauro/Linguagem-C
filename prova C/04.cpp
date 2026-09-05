/*
4. Matriz + Função: Crie uma função int somarElementos(int matriz[][5], int linhas) que
recebe uma matriz de inteiros e retorna a soma de todos os seus elementos.
*/


#include <stdio.h>
#include <stdlib.h>

int somarElementos(int matriz[][5], int linhas){
	
	int soma = 0;
	
	for (int i=0; i<linhas;i++){
		for (int j=0; j<5;j++){
			soma = soma + matriz[i][j];
		}
	}
	
	
	return soma;
}



int main(){
	
	int N;
	
	printf("A matriz possui quantas linhas? ");
	scanf("%d", &N);
	
	int minhaMatriz[N][5];
	
	// preencher a matriz
	
	printf("Preencha os valores da matriz!!!!!\n");
	for (int i=0; i<N;i++){
		for (int j=0; j<5;j++){
			printf("Digite o valor do elemento [%d][%d]: ",i,j);	
			scanf("%d", &minhaMatriz[i][j]);
		}	
	}
	
	int resultado = somarElementos(minhaMatriz,N);
	
	 
	
	printf("A soma de todos elementos eh de %d", resultado);
		
	return 0;
}


