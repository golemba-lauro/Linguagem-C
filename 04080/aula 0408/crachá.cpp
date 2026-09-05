#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome, empresa;
	
	
	printf("Digite o seu nome: \n");
	scanf("%s", &nome);
	printf("Digite o nome da sua empresa: \n");
	scanf("%s", &empresa);
	printf("Seu nome e: %s e sua empresa e: %s", nome, empresa);
	system("pause");
	return 0;
	
}
