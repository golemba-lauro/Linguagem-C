#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>


int main(){
	
	float largura;   // poderia ser DOUBLE por ser nº REAL SE FOSSE DOUBLE USARIA --> %lf
	float comprimento;
	float valorMetro;
	float area;
	float preco;
	
	
	printf("Digite a largura do terreno: ");
	scanf("%f", &largura);
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &comprimento);
	printf("Digite o valor do metro quadrado: ");
	scanf("%f", &valorMetro);
	
	area = largura * comprimento;
	
	preco = area * valorMetro;
	
	printf("Area do terreno = %.2f \n",area);
	printf("Preco do terreno = %.2f \n",preco);
	
	
	return 0;
}
