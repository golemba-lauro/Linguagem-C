/*
1. Busca em Vetor: Crie uma função int buscarValor(int vetor[], int tamanho, int valorBuscado) que retorna o índice da primeira ocorrência de valorBuscado no vetor,
ou -1 se o valor não for encontrado.
*/

#include <stdio.h>
#include <stdlib.h>

int buscarValor(int vetor[], int tamanho, int valorBuscado){
	
	
	
	for (int i=0;i<tamanho;i++){
		if(valorBuscado == vetor[i]){
			return i;
		}
	}
	
	return -1;
}




int main(){
	
	int N;
	
	printf("==== Vamos criar um vetor! ==== \n");
	printf("\n");
	
	printf("Qual sera o tamanho do vetor? ");
	scanf("%d",&N);
	
	int vetorCriado[N];
	
	// entrada de dados
	for(int i=0; i<N;i++){
	printf("Digite o %do elemento do Vetor: ",i+1);
	scanf("%d", &vetorCriado[i]);
	}	
	
	int valorProcurado;
	
	printf("O valor que voce quer buscar no Vetor: ");
	scanf("%d", &valorProcurado);
	
	
	int indiceEncontrado = buscarValor(vetorCriado, N, valorProcurado);

	if (indiceEncontrado == -1){
		printf("Valor %d nao encontrado no vetor", valorProcurado);
	}else{
		printf("Valor %d encontrado no vetor! Ele esta no indice: %d",valorProcurado, indiceEncontrado );
		}
	

	
	
	return 0;
}
