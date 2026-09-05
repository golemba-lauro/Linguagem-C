/*
1. Solicitar o nickname e a idade de um jogador. Informar se ele pode participar de um campeonato
que exige idade mínima de 16 anos
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main (){
	setlocale(LC_ALL,"Portuguese");
	
	char nickname[50];
	int idade;
	
	
	printf("Digite o seu nickname: ");
	fgets(nickname, 50, stdin);
	nickname[strcspn(nickname, "\n")] = '\0';
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 16){
		printf("PODE PARTICIPAR DO CAMPEONATO! \n");
	}else{
		printf("NAO possui idade para participar do Campeonato! \n");
	}
	
		
	
		
		
	system("pause");
	return 0;
}


























