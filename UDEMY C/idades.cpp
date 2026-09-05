#include <stdio.h>
#include <stdlib.h>



int main (){
	
	char nome1[50], nome2[50];
	int idade1, idade2;
	float media;
	
	
	
	printf("Dados da primeira pessoa: \n");
	printf("Nome: ");
	fgets(nome1, sizeof(nome1), stdin); //------------------ poderia ser gets(nome1)
    // Remove o \n do nome1
	nome1[strcspn(nome1, "\n")] = 0;
	printf("Idade: ");
	scanf("%d", &idade1);	
	printf("Dados da segunda pessoa: \n");
	printf("Nome: ");
	gets(nome2); //-------------------------------------- poderia ser fgets
	//--------------------------------------------- se usar 2x gets vai dar erro no segundo entao
	printf("Idade: "); //-------------------------- precisaria limpar buffer com:
	scanf("%d", &idade2); //-------------------------- fseek(stdin, 0, SEEK_END);
	
	
	
	media = (idade1+idade2)/2;
	
	printf("A idade media de %s e %s eh de %.1f anos\n",nome1,nome2,media);
	
	return 0;
}


