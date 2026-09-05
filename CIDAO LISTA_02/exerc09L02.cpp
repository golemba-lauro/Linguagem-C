/*
9 Calcule e apresente a área de um círculo: Área = 3,1416 * R² (R² significa R * R)
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL,"Portuguese");
	
	float raio, areaCirculo;
	
	
	printf("Digite o RAIO do circulo:");
	scanf("%f", &raio);
	
	areaCirculo = 3.1416 * raio * raio;
	
	
	printf("A área do circulo é de: %.2f \n", areaCirculo);
	
	
	
	
	
		
		
	system("pause");
	return 0;
}


