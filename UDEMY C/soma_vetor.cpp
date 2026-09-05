#include <stdio.h>
#include <stdlib.h>


int main (){
	
	int N, i;
	float vet[3];
	float soma = 0;
	float media;
	
	
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d", &N);
	
	// poderia declarar o vetor aqui como:
	// -------- float vet[N];
	
	for(i=0; i < N; i++){
		printf("Digite um numero: ");
		scanf("%f", &vet[i]);
						
	}
	
	
	
	printf("VALORES = ");
	for(i=0; i < N; i++){
		printf("%.1f  ", vet[i]);		
	}
	
	for(i=0; i < N; i++){
		soma = soma + vet[i];		
	}
	
	printf("\n");	
	printf("SOMA = %.2f", soma);
	printf("\n");
	
	media = soma / N;	
	printf("MEDIA = %.2f", media);	
	
		
	
	
	
	
	return 0;
}
