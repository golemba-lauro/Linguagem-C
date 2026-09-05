/*
6. Faça um programa para ler do teclado uma quantidade de segundos e
imprimir na tela a conversão para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saída: 1:1:12
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int totalSegundos;
	int horas, minutos, segundos;
	
	printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);
    
    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60; // resto do que sobrou da DIV por 3600
    segundos = totalSegundos % 60;
    
    printf("Saida: %d:%d:%d\n", horas, minutos, segundos);
		
	
	system("pause");
	return 0;
}
