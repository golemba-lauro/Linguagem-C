#include <stdio.h>
#include <stdlib.h>



char main(){
	
	char nome, sexo;
	
	printf("Digite a primeira letra do seu nome: \n");
	scanf(" %c", &nome);
	printf("Digite seu sexo: M para Masculino e F para feminino: \n");
	scanf(" %c", &sexo);
	printf("A primeira letra do seu nome e %c, e seu sexo e %c. \n", nome, sexo);
	system("pause");
	return 'a';	
	
}
