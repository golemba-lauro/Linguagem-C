/*
2. Estatísticas de Vetor: Crie uma procedure void calcularEstatisticas(int vetor[], int
tamanho, float *media, int *maior, int *menor) que recebe um vetor e três ponteiros.
A procedure deve calcular a média, o maior e o menor valor do vetor e armazenar os
resultados nas variáveis apontadas pelos ponteiros
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float media;
    int maior;
    int menor;
} EstatisticasVetor; // Este é o novo nome do tipo


/*
Função para calcular a média, o maior e o menor valor de um vetor.
Agora, ela RETORNA a struct usando o apelido 'EstatisticasVetor'.
*/
EstatisticasVetor calcularEstatisticas(int vetor[], int tamanho) {
    
    // 2. Declara uma variável local (sem a palavra 'struct')
    EstatisticasVetor stats;

    // 3. Tratamento de caso: Se o vetor estiver vazio
    if (tamanho <= 0) {
        stats.media = 0.0f;
        stats.maior = 0;
        stats.menor = 0;
        return stats; // Retorna a struct com valores zerados
    }

    // 4. Inicialização
    stats.maior = vetor[0];
    stats.menor = vetor[0];
    
    float soma = 0.0f;

    // 5. Loop para percorrer o vetor
    for (int i = 0; i < tamanho; i++) {
        
        soma += vetor[i];

        if (vetor[i] > stats.maior) {
            stats.maior = vetor[i]; 
        }

        if (vetor[i] < stats.menor) {
            stats.menor = vetor[i];
        }
    }

    // 6. Cálculo final da média
    stats.media = soma / tamanho;

    // 7. Retorna a struct inteira preenchida
    return stats;
}
//==============================================================================================================================

// Função principal para testar a função
int main() {
    
    // --- INÍCIO DA MODIFICAÇÃO ---
    
    int tamanho_vetor;
    
    printf("===== Calculadora de Estatisticas de Vetor =====\n");
    printf("Qual sera o tamanho do vetor? ");
    scanf("%d", &tamanho_vetor);

    // Verifica se o tamanho é válido
    if (tamanho_vetor <= 0) {
        printf("Erro: O tamanho do vetor deve ser positivo.\n");
        return 1; // Encerra o programa com erro
    }

    // Declara o vetor com o tamanho fornecido pelo usuário (VLA)
    int numeros[tamanho_vetor];

    // Loop para preencher o vetor
    printf("\n--- Por favor, preencha o vetor ---\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o %do elemento: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    // --- FIM DA MODIFICAÇÃO ---


    // 1. Declara a variável de resultado (sem a palavra 'struct')
    EstatisticasVetor resultados;

    printf("\nVetor digitado: ");
    for(int i=0; i < tamanho_vetor; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // 2. Chama a função e armazena a struct retornada na variável
    resultados = calcularEstatisticas(numeros, tamanho_vetor);

    // 3. Imprime os resultados
    // O acesso aos campos continua igual, com o operador '.'
    printf("===== Estatisticas =====\n");
    printf("Media: %.2f\n", resultados.media); 
    printf("Maior valor: %d\n", resultados.maior);
    printf("Menor valor: %d\n", resultados.menor);
    
    return 0;
}
