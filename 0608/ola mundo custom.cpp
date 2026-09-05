#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca necessária para acentuação

int main() {
	
	setlocale(LC_ALL, "Portuguese"); //localização para lingua portuguesa, aceita acentuação e caracteres especiais
	
	char nome[20]; 											//declaração de variavel char com no maximo 20 caractereres
	
	printf("Qual o seu nome? \n");
	scanf("%s", nome); 			//leitura da variavel NOME ("%s" é o que ele está esperando o que voce digite(no caso uma string), e onde vai ser salvo
	printf("Olá %s! Seja bem vindo ao mundo da programação em C. \n", nome); //%s serve para puxar a variavel string (letras)
	system("pause");
	return 0;
}
