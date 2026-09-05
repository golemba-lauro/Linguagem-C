/*
4. Escreva um programa que leia um valor de despesa de restaurante, o
valor da gorjeta (em porcentagem) e o número de pessoas para dividir a
conta. Imprima o valor que cada um deve pagar. Assuma que a conta será
dividida igualmente.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	
	float conta, gorjeta, valor_total;
	int num_pessoas;
	
	printf("Digite o valor total da despesa: \n");
	scanf(" %f",&conta);
	printf("Digite a porcentagem da gorjeta: \n");
	scanf(" %f",&gorjeta);
	printf("Digite o número de pessoas: \n");
	scanf("%d",&num_pessoas);
	
	
	valor_total = (conta + (conta * gorjeta / 100)) / num_pessoas;
	
	printf("O valor total com a gorjeta que cada um deve pagar é de: R$%.2f \n",valor_total);


		
system ("pause");
return 0;
}
