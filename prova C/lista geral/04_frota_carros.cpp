/*
Exercício 4: Gerenciador de Frota
Usando a struct abaixo, crie um programa para gerenciar uma frota de 10 carros:
typedef struct {
char modelo[30];
char marca[30];
int ano;
float preco;
} Carro;
Crie uma procedure cadastrarFrota(Carro frota[], int tam) que use um loop para pedir ao
usuário os dados de todos os 10 carros.
Crie uma procedure imprimirFrota(Carro frota[], int tam) que imprima os dados de todos os
carros.
Crie uma function buscarMaisCaro(Carro frota[], int tam) que retorne o índice (a posição no
vetor) do carro mais caro.
Crie uma procedure imprimirPorAno(Carro frota[], int tam, int ano_busca) que imprima todos
os carros fabricados no ano_busca.
Na main, crie o vetor de 10 Carros, chame cadastrarFrota(), imprimirFrota(), depois encontre e
imprima os dados do carro mais caro (usando o índice retornado pela função 3), e por fim
peça ao usuário um ano e chame imprimirPorAno().
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAM_FROTA 10


typedef struct {
char modelo[30];
char marca[30];
int ano;
float preco;
} Carro;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void cadastrarFrota(Carro frota[], int tam){
	
	for(int i=0;i<tam;i++){
	printf("\n--- Dados do Carro %d ---\n", i + 1);
	printf("Digite o modelo: ");
	fgets(frota[i].modelo, sizeof(frota[i].modelo), stdin);
	// Usamos fgets para ler nomes com espaco (ex: "Gol GTI")
    // fgets armazena o '\n' (Enter), precisamos removê-lo
    frota[i].modelo[strcspn(frota[i].modelo, "\n")] = 0;
    printf("Digite a marca: ");
    fgets(frota[i].marca, sizeof(frota[i].marca), stdin);
    frota[i].marca[strcspn(frota[i].marca, "\n")] = 0;
    printf("Digite o ano: ");
    scanf("%d", &frota[i].ano);
    printf("Digite o preco: ");
    scanf("%f",&frota[i].preco);    
	// 6. O PULO DO GATO!
    limparBuffer();
	}
	
	
}

void imprimirFrota(Carro frota[], int tam){
	
	for (int i=0; i<tam;i++){
		printf("\n--- Dados do Carro %d ---\n", i + 1);
		printf("MODELO: %s\n", frota[i].modelo);
		printf(" Marca: %s\n", frota[i].marca);
        printf(" Ano: %d\n", frota[i].ano);       
        printf(" Preco: R$ %.2f\n", frota[i].preco);
        printf("-----------------------\n");
	}
	
}

float buscarMaisCaro(Carro frota[], int tam){
//que retorne o índice (a posição no vetor) do carro mais caro.	
	float maisCaro = frota[0].preco;
	int posicao = 0;
	
	for(int i=1; i<tam;i++){
		if (frota[i].preco > maisCaro){
			maisCaro = frota[i].preco;
			posicao = i;
		}
	}
	
	return posicao;
	
}

void imprimirPorAno(Carro frota[], int tam, int ano_busca){

	int encontrou = 0; // Começa em 0 (falso). Se acharmos um carro, mudamos para 1 (verdadeiro).

	for (int i=0;i<tam;i++){
		if(ano_busca == frota[i].ano){
			printf("Os modelos da frota do ano %d sao:\n\n",ano_busca);
			printf("\n--- Dados do Carro %d ---\n", i + 1);
			printf("MODELO: %s", frota[i].modelo);
			printf(" Marca: %s\n", frota[i].marca);        	
       		printf(" Preco: R$ %.2f\n", frota[i].preco);
        	printf("-----------------------\n");
        	encontrou = 1;
		}
	}
	if (encontrou == 0) {
        printf("Nenhum carro encontrado para o ano %d.\n", ano_busca);
    }
}



int main(){
	
	Carro frota[TAM_FROTA];
	int buscaAno;
    
    
    printf("=== CADASTRO DA FROTA (%d Carros) ===\n", TAM_FROTA);
    cadastrarFrota(frota, TAM_FROTA);
    
    printf("\n\n=== FROTA COMPLETA ===\n");
	imprimirFrota(frota,TAM_FROTA);
	
	int carroCaro = buscarMaisCaro(frota,TAM_FROTA);
	printf("O caro mais caro eh o %do carro da frota.",carroCaro);
	
	printf("Busque os carros do ano desejado: ");
	scanf("%d",&buscaAno);
	
	imprimirPorAno(frota,TAM_FROTA,buscaAno);
	
	
	return 0;
}
