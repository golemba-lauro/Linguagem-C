/*
01
Vetor + Função: Crie uma função int maiorElemento(int vetor[], int tamanho) que
recebe um vetor de inteiros e seu tamanho, e retorna o maior valor presente no vetor
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int maiorElemento(int vetor[], int tamanho) {
    
    // Assume que o primeiro elemento é o maior
    int maior = vetor[0];

    // Percorre o restante do vetor (a partir do índice 1)
    for (int i = 1; i < tamanho; i++) {
        // Se encontrar um número maior, atualiza
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Retorna o maior valor encontrado
    return maior;
}


// --- Função Principal (main) MODIFICADA ---
int main() {
    
    int tamanhoDoVetor;

    // --- ENTRADA DE DADOS ---

    // 1. Pergunta ao usuário quantos números ele quer digitar
    printf("Quantos números você deseja inserir no vetor? ");
    scanf("%d", &tamanhoDoVetor);

    // 2. Validação simples: não podemos ter um vetor de 0 ou menos números
    if (tamanhoDoVetor <= 0) {
        printf("Tamanho inválido. O programa será encerrado.\n");
        return 1; // Encerra o programa indicando um erro
    }

    // 3. Declara o vetor com o tamanho exato que o usuário pediu
    int meusNumeros[tamanhoDoVetor];

    printf("\n--- Digite os %d números ---\n", tamanhoDoVetor);

    // 4. Cria um loop para pedir cada número
    for (int i = 0; i < tamanhoDoVetor; i++) {
        printf("Digite o %dº número: ", i + 1); // (i + 1) é só para mostrar 1º, 2º...
        scanf("%d", &meusNumeros[i]); // Armazena o número no vetor
    }

    // --- PROCESSAMENTO E SAÍDA ---

    // 5. Chama a função, passando o vetor preenchido e seu tamanho
    int resultado = maiorElemento(meusNumeros, tamanhoDoVetor);

    // 6. Exibe o resultado final
    printf("\nO maior elemento digitado foi: %d\n", resultado);

    return 0;
}
