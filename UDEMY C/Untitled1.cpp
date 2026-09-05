/*
1. Vetor + Função: Crie uma função int maiorElemento(int vetor[], int tamanho) que
recebe um vetor de inteiros e seu tamanho, e retorna o maior valor presente no vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int maiorElemento(int vetor[], int tamanho) {
          
    // Inicializa 'maior' com o primeiro elemento do vetor.
    int maior = vetor[0];

    // Percorre o vetor a partir do segundo elemento (índice 1).
    for (int i = 1; i < tamanho; i++) {
        // Se o elemento atual (vetor[i]) for maior que 'maior',
        // atualiza 'maior' com esse valor.
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Retorna o maior valor encontrado.
    return maior;
}

// --- Função Principal (main) para Testar ---
int main() {
    // Exemplo de vetor
    int numeros[] = {15, 78, 4, 31, 99, 23, 50};
    
    // Define o tamanho manualmente (sabemos que é 7)
    int tamanhoVetor = 7;

  	int maior = maiorElemento(numeros, tamanhoVetor);

        // Exibe o resultado
        printf("O vetor e: ");
        for(int i = 0; i < tamanhoVetor; i++) {
            printf("%d ", numeros[i]);
        }
        
        printf("\nO maior elemento do vetor e: %d\n", maior);
   
    return 0;
}
