/*
8 Calcule e apresente a área de um triângulo: Área = (base * altura) / 2
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int base, altura;
	float areaTriangulo;
	
	
	printf("Digite a base do triangulo:");
	scanf("%d", &base);
	printf("Digite a altura do triangulo:");
	scanf("%d", &altura);
	
	areaTriangulo = (base * altura) / 2; 
	
	printf("A área do triangulo é de: %.2f \n", areaTriangulo);
	
	
	
	
	
		
		
	system("pause");
	return 0;
}
