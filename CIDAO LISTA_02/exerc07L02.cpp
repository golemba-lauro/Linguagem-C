/*7. Solicite o nome e o salário de uma pessoa. Calcule e apresente o novo
salário com um aumento de 28,5%
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[50];
	float salario, salarioAumento;
	
	printf("Digite o seu nome:");
	scanf("%s", &nome);
	printf("Digite o valor do salário R$ ");
	scanf("%f", &salario);
	
	salarioAumento = salario + (salario * 0.285);
	
	printf("O valor do salario atualizado é de R$%.2f \n",salarioAumento);
	
	
	
		
	system("pause");
	return 0;
}
