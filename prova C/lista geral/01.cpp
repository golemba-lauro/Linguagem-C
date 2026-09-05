/*
Exercício 1: Análise de Vetor
Crie um programa que:
Tenha uma procedure preencherVetor(int vet[], int tam) que preencha um vetor com números
inteiros aleatórios de 1 a 100.
Tenha uma procedure imprimirVetor(int vet[], int tam) que imprima o vetor.
Tenha uma function calcularMedia(int vet[], int tam) que retorne a média (float) dos valores
no vetor.
Tenha uma function encontrarMaior(int vet[], int tam) que retorne o maior valor presente no
vetor.
Na main, declare um vetor de 20 posições, chame as funções para preenchê-lo, imprimi-lo, e
depois exiba a média e o maior valor encontrado.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int vet[],int tam){
	
	 for (int i=0; i < tam;i++){
	 	vet[i] = (rand() % 100) + 1; 
	}
}

void imprimirVetor(int vet[], int tam){
	
	for (int i=0; i < tam;i++){
	 	printf("%d\n", vet[i]);
	}
}

float calcularMedia(int vet[], int tam){
	
	float media;
	float soma=0;
	
	for (int i=0; i < tam;i++){
	 	soma = soma + vet[i];
	 	
	}
	media = soma/tam;
	
	return media;
}


int encontrarMaior(int vet[], int tam){
	
	int maior;
	
	maior = vet[0];
	for (int i=1; i < tam;i++){
		if (vet[i]> maior){
			maior = vet[i];
		}
	}
	return maior;
	
}


int main(){
	
	int vetInicial[20];
	int menu;
	//int preenchido = 0;
	
	srand(time(NULL));
	
	while(1){
		
	printf("=================MENU DO PROGRAMA=================\n");
	printf("1 - Preenche o vetor \n");
	printf("2 - Imprimir o vetor\n");
	printf("3 - Calcular a media dos valores do vetor\n");
	printf("4 - Encontrar o maior vetor\n");
	printf("5 - Encerrar o programa\n");
	printf("\n");
	
	printf("Digite uma opcao (entre 1 e 5): ");
	scanf("%d",&menu);
	printf("\n");
		/*
	if (scanf("%d", &menu) != 1){
            printf("Entrada invalida.\n");
            return 0;
        }
	*/
	
	switch (menu) {
		case 1:{
			preencherVetor(vetInicial,20);
			printf("Vetor preenchido com sucesso!\n ");
			printf("\n");
			break;
		}			
			
		case 2:{
			imprimirVetor(vetInicial,20);
			printf("\n");			
			break;
		}			
		case 3:{
			float resultado = calcularMedia(vetInicial,20);
			printf ("A media dos valores do vetor eh de: %.2f\n ", resultado);
			printf("\n");
			break;
		}			
		case 4: {
            //if (!preenchido){ 
			//printf("Primeiro preencha o vetor (opcao 1).\n"); break; 
			//}
            int maiorVetor = encontrarMaior(vetInicial, 20);
            printf("O maior valor presente no vetor eh de: %d\n ", maiorVetor);
            printf("\n");
            break;
        }			
		case 5:{
			printf("Encerrando...\n");
            return 0;
		}            
		default:
			printf("Valor invalido\n\n");
	}
	
	}
	
	return 0;
}
