#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
	
	float base;
	float altura;
	float area;
	float perimetro;
	float diagonal;
	
	
	printf("Base do retangulo: ");
	scanf("%f", &base);
	printf("Altura do retangulo: ");
	scanf("%f", &altura);
	
	area = base * altura;
	
	perimetro = 2 * (base+altura);
	/*
	RAIZ QUADRADA em C = sqrt -> precisa da biblioteca #include <math.h>
	pow = potenciacao
	*/
		
	diagonal = sqrt(pow(base, 2) + pow(altura, 2));
	
	printf("AREA = %.4f\n",area);
	printf("PERIMETRO = %.4f\n",perimetro);
	printf("diagonal = %.4f\n",diagonal);
	
	
	
	
	return 0;
}
