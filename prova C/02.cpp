/*
2. Vetor + Procedure: Crie uma procedure void imprimirVetor(int vetor[], int tamanho)
que recebe um vetor de inteiros e seu tamanho, e imprime todos os seus elementos
na tela.
*/

#include <stdio.h>
#include <stdlib.h>

void imprimirVetor(int vetor[], int tamanho){
	
	printf("Os valores do vetor sao: \n");
	
	for (int i=0; i<tamanho;i++){
		printf("%d\n", vetor[i]);		
	}
		
}

//---------------------------------------------------------------------------
int main(){
	
	int N;
	
	printf("Quantos numeros possui o seu vetor de inteiros: ");
	scanf ("%d", &N);
	
	int vetorDigitado[N];
	
	for (int i=0; i<N;i++){
		printf("Digite o %do numero do vetor: ", i+1);
		scanf("%d", &vetorDigitado[i]);
	}
	
	imprimirVetor(vetorDigitado, N);
			
	
	return 0;
	
}

// printf("Procedure de imprimir vetor: %d \n",imprimir);
