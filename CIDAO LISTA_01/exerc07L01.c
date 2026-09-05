/*
Exercício 7: Controle de Estoque (Tipo: int)
Contexto: Você está desenvolvendo um programa para o controle de estoque de uma pequena loja. O
programa precisa calcular o total de itens restantes após uma venda.
Proposta: Crie um programa que leia a quantidade atual de um produto no estoque e a quantidade que
foi vendida. Calcule e exiba a quantidade de itens que restaram no estoque.
Resultado Esperado (Exemplo de Execução):
--- Controle de Estoque ---
Digite a quantidade atual do produto em estoque:
50
Digite a quantidade vendida:
12
Estoque atualizado: restam 38 unidades do produto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int estoque, vendas, estoque_atualizado;

    printf("--- Controle de Estoque --- \n");

    printf("Digite a quantidade atual do produto em estoque: \n");
    scanf("%d",&estoque);
    printf("Digite a quantidade vendida: \n");
    scanf(" %d",&vendas);


    printf("Estoque atualizado: restam %d unidades do produto. \n",(estoque_atualizado = estoque - vendas));




system("pause");
return 0;


}
