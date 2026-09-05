#include <stdio.h>
#include <stdlib.h>

/*
01
Vetor + Função: Crie uma função int maiorElemento(int vetor[], int tamanho) que
recebe um vetor de inteiros e seu tamanho, e retorna o maior valor presente no vetor
*/


int maiorElemento(int vetor[], int tamanho){
	
	int maiorNumero = vetor[0]; // no inicio ele precisa pegar a 1a posicao
	
	for (int i=1; i < tamanho; i++){ // se ele começa em zero ele precisa comecar a comparar A PARTIR DO 1 
		if (vetor[i] > maiorNumero);
			maiorNumero = vetor[i];		
	}
	return maiorNumero;
}


int main(){
	
	int N;
	
	printf ("Quantos numeros voce deseja inserir no vetor? ");
	scanf("%d", &N);
	
	if (N<= 0){
		printf("Numero invalido");
		
		return 1;// Encerra o programa indicando um erro
	}
	
	int meusNumeros[N];
	
	printf("\n--- Digite os %d numeros ---\n", N);
	
	for(int i=0; i < N; i++){  // 4. Cria um loop para pedir cada número
		printf("Digite o %do numero: ", i+1);
		scanf("%d", &meusNumeros[i]); // Armazena o número no vetor
	}
	
	// --- PROCESSAMENTO E SAÍDA ---

    // 5. Chama a função, passando o vetor preenchido e seu tamanho
    int resultado = maiorElemento(meusNumeros, N);
    
    // 6. Exibe o resultado final
    printf("\nO maior elemento digitado foi: %d\n", resultado);
	
}
