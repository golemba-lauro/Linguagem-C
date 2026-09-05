/*
1. Crie um programa em C que permita fazer a conversão cambial entre
Reais e Dólares. Considere como taxa de câmbio US$1,0 = R$5,30. Leia
um valor em Reais e mostre o correspondente em Dólares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	
	
	float reais,dolares;
	
	printf("==== CALCULADORA PARA CONVERSÃO R$ em $ ===== \n");
	printf("Digite o valor em reais: R$");
	scanf(" %f", &reais);
	
	dolares = reais / 5.30;
	printf("Esse valor em dólares é de: $%.2f \n",dolares);
	
system ("pause");
return 0;
}
