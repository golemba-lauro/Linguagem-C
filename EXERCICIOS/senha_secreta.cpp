#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int senha = 1234;
	int tentativa;
	
	do{
	
	printf("Digite a senha correta: ");
	scanf("%d",&tentativa);
	
	if (tentativa != senha) {
		printf("Senha incorreta. Tente novamente.\n");
	}
	
	}while (tentativa != senha);
	
	printf("\nAcesso permitido!\n");

system("pause");
return 0;
	
	
}
