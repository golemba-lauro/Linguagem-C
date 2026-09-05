/*Exercício 1: Lançamento de Foguete (Laço for)
• Contexto:
• Você está no controle de lançamento da NASA e precisa criar um programa que faça a contagem regressiva para o lançamento de um foguete. • Proposta:
• Crie um programa que use um laço for para fazer uma contagem regressiva de 10 até 1. Ao final, exiba a mensagem "Lançar!".
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	printf("--- Contagem Regressiva ---\n");
	for (i = 10; i >= 1; i--)  {
	printf("%d...\n",i);			
	}
	printf("Lancar! \n");
	
	system("pause");
	return 0;
}
