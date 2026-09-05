#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//variavel numero inteiro e outra variavel do dobro

int main(){

	setlocale(LC_ALL, "Portuguese");

	int numero, dobro;
	
	
	printf("Digite um número inteiro. \n");
	scanf("%d", &numero); //%d especificador de formato para numeros inteiros // "&" indicador de variavél
	dobro = numero * 2;
	printf("O dobro de %d é: %d \n", numero, dobro);
	
	system("pause");
	return 0;
	
	
}
