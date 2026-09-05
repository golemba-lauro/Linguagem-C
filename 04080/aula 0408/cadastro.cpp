#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[10];
	int idade;
	float altura;
	
	
	printf("Digite o seu nome: \n"); //utilizar o %s para string
	scanf (" %s", &nome);
	printf("Digite sua Idade: \n");
	scanf("%i", &idade);
	printf("Digite sua altura: \n");
	scanf("%f", &altura);
	printf("Cadastro realizado: Nome: %s, Idade: %i, Altura %.2f", nome, idade, altura); //a altura precisa ser digitada com .(ponto)
	system("pause");
	return 0;
	
	
	
	
}
