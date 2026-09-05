/*
Vetor + Função: Crie uma função int maiorElemento(int vetor[], int tamanho) que
recebe um vetor de inteiros e seu tamanho, e retorna o maior valor presente no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int maiorElemento(int vetor[], int tamanho){
	
	int maior = vetor[0];
	
	for (int i=1; i < tamanho; i++){
		if(vetor[i] > maior){
			maior = vetor[i]; 
		}
	}
	
	
	
	return maior;
}


int main(){
	
	int tamanhoVetor;
	
	printf("Quantos numeros inteiros tem o vetor: ");
	scanf("%d", &tamanhoVetor);
	
	if (tamanhoVetor <= 0){
		printf("Numero invalido! Encerrando programa!");
		return 1;
	}
	
	int numerosDigitados[tamanhoVetor];
	
	for(int i=0; i < tamanhoVetor;i++){
		printf("Digite o %do numero do vetor: ", i+1);
		scanf("%d", &numerosDigitados[i]);
		
	}
	
	
	int resultado = maiorElemento(numerosDigitados,tamanhoVetor);
	
	printf ("O maior valor no vetor eh: %d",resultado);
	
	return 0;
	
}

