/*
14. Solicitar o nome e a idade de 3 pessoas (utilizando a estrutura FOR).
*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main (){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[50];
	int i, idade;
	

	for (i = 0; i < 3; i++){
	
	printf("Digite o seu nome:\n");
	scanf(" %s", nome);
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);

	
	}
	
				
	system("pause");
	return 0;
}

//fgets(nome,50,stdin);
//	nome[strcspn(nome,"\n")] = '\0';
//	fflush(stdin);


