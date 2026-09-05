/*
Exercício 1: Saudação Personalizada
Proposta: Escreva um programa que pergunte ao usuário o seu primeiro nome e, em seguida, exiba uma
mensagem de boas-vindas personalizada com o nome que ele digitou.

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "Portuguese");

    char nome[50];

        printf("Digite o seu primeiro nome: \n");
        scanf("%s",&nome);
        fflush(stdin);// LIMPEZA DE BUFFER - boa prática
        printf("Olá, %s! Seja bem-vindo ao mundo da programação em C. \n",nome);

    system ("pause");
    return 0;
}

