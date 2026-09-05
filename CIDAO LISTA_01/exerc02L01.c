/*
Exercício 2: Calculadora de Dobro
Proposta: Crie um programa que leia um número inteiro do usuário e, em seguida, calcule e exiba o
dobro desse número.
Exemplo de Execução:
Digite um numero inteiro:
15
O dobro de 15 e: 30
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int numero, dobro;

    printf("Digite um número inteiro: \n");
    scanf("%d",&numero);
    dobro = numero * 2;
    printf("O dobro de %d é: %d \n", numero, dobro);

    /*
    para apenas 1 variavel deve ficar ->>>> diretamente dentro da função printf
    printf("O dobro de %d e: %d\n", numero, numero * 2);
    */
    system ("pause");
    return 0;
}
