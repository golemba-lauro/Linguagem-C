#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	char sexo;
	int idade;
	
	
	printf("Digite o seu sexo (M/F): \n");
	scanf("%c", &sexo);
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	if((sexo == 'M' || sexo == 'm') && idade == 18) //linha do IF nunca se usa ;
		printf("Alistamento obrigatorio: \n");
	else
		printf("Alistamento dispensdo!");
	
	
	system("pause");
	return 0;
	
	
	
}
