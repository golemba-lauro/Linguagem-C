/*
Exercício 8: Calculadora de Gorjeta (Tipo: float)
Contexto: Você está em um restaurante com amigos e quer criar um programa simples para calcular o
valor da gorjeta do garçom.
Proposta: Escreva um programa que leia o valor total da conta (um número com casas decimais) e a
porcentagem da gorjeta que vocês desejam dar (ex: 10 para 10%). O programa deve calcular e exibir o
valor da gorjeta e o valor total da conta com a gorjeta.
Resultado Esperado (Exemplo de Execução):
--- Calculadora de Gorjeta ---
Digite o valor total da conta: R$
80.50
Digite a porcentagem da gorjeta (ex: 10):
10
Valor da gorjeta: R$ 8.05
Valor total a pagar: R$ 88.55
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float ValorTotalConta, gorjeta, pagamento, porcentagem;

    printf("--- Calculadora de Gorjeta --- \n");

    printf("Digite o valor total da conta: R$\n");
    scanf("%f",&ValorTotalConta);
    printf("Digite a porcentagem da gorjeta: \n");
    scanf("%f",&porcentagem);

    gorjeta = (ValorTotalConta * porcentagem) / 100;
    printf("Valor da gorjeta: R$ %.2f \n",gorjeta);
    pagamento = ValorTotalConta + gorjeta;
    printf("Valor total a pagar: R$ %.2f \n", pagamento);



system("pause");
return 0;


}
