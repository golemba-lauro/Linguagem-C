/*
Exercício 10: Resumo de Produto (Múltiplos Tipos)
Contexto: Você está criando uma ficha de produto para um sistema de e-commerce. O programa deve
coletar o nome, o preço e a quantidade inicial em estoque de um novo produto.
Proposta: Escreva um programa que leia o nome de um produto (uma única palavra), a quantidade em
estoque (inteiro) e o seu preço unitário (float). Ao final, exiba um resumo com todas as informações
coletadas.
Resultado Esperado (Exemplo de Execução):
--- Cadastro de Novo Produto ---
Digite o nome do produto (uma palavra):
Teclado
Digite a quantidade em estoque:
30
Digite o preço unitário: R$
150.99
--- Resumo do Produto Cadastrado ---
Produto: Teclado
Estoque: 30 unidades
Preço: R$ 150.99
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char produto[50];
    int quantidade;
    float preco;

    printf("--- Cadastro de Novo Produto --- \n");

    printf("Digite o nome do produto (uma palavra): \n");
    scanf("%s",produto);
    printf("Digite a quantidade em estoque: \n");
    scanf("%d",&quantidade);
    printf("Digite o preço unitário: R$ \n");
    scanf("%f",&preco);

    printf("--- Resumo do Produto Cadastrado --- \n");
    printf("Produto: %s \n",produto);
    printf("Estoque: %d \n", quantidade);
    printf("Preço: %.2f \n",preco);





system("pause");
return 0;


}
