#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	
	char nome1[50], nome2[50];
	int idade1, idade2;
	float media;
	
	
	
	printf("Dados da primeira pessoa: \n");
	printf("Nome: ");
	gets(nome1); //------------------ poderia ser fgets(nome1, sizeof(nome1), stdin);
	//-----------------------------------------------------------------  nome1[strcspn(nome1, "\n")] = 0;
	 //--------------------- STRCSPN precisa da #include <string.h>
	printf("Idade: ");
	scanf("%d", &idade1);	
	printf("Dados da segunda pessoa: \n");
	printf("Nome: ");
	fseek(stdin, 0, SEEK_END);
	gets(nome2); //-----------------------------    --------- poderia ser fgets
	//--------------------------------------------- se usar 2x gets vai dar erro no segundo entao
	printf("Idade: "); //-------------------------- precisa limpar buffer ANTES com:
	scanf("%d", &idade2); //-------------------------- fseek(stdin, 0, SEEK_END);
	
		
	media = (idade1+idade2)/2.0;
	/*
	para evitar erro na conta colocar 2.0 e NAO APENAS 2 ou
	escrever assim:
						media = (double ou float) (idade1 + idade2) / 2;
	*/
	
	printf("A idade media de %s e %s eh de %.1f anos\n",nome1,nome2,media);
	
	return 0;
}


