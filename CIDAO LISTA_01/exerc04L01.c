/*
Exercício 4: Capturando uma Letra
Proposta: Escreva um programa que peça ao usuário para digitar a primeira letra do seu nome e seu
sexo (M para Masculino, F para Feminino). Em seguida, exiba a letra e o sexo digitados.
Exemplo de Execução:
Digite a primeira letra do seu nome:
J
Digite seu sexo (M/F):
M
A inicial do seu nome e J e seu sexo e M.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char letra,sexo;

    printf("Digite a primeira letra do seu nome: \n");
    scanf(" %c",&letra);
    printf("Digite o seu sexo (M/F): \n");
    scanf(" %c",&sexo);

    printf("A inicial do seu nome é %c e seu sexo é %c. \n", letra, sexo);

//O espaço antes do %c (" %c") instrui o scanf a ignorar qualquer caractere de espaço em branco
// e garante que o programa espere pela nova entrada do usuário.

system ("pause");
return 0;
}
