/*
5. Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um
programa que solicite o número de dias trabalhados pelo encanador e
imprima a quantia líquida que deverá ser paga, sabendo que são
descontados 8% para imposto de renda.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	
	int valor_pago; // = 45 //por dia
	int num_dias; // numero de dias trabalhados 
	float desconto_imposto;
	
	printf("Digite o número de dias trabalhados: \n");
	scanf("%d",&num_dias);
	
	valor_pago = (45.00 * num_dias); 
	desconto_imposto = valor_pago - ((valor_pago * 8) / 100);
	/*
	Para calcular em uma linha apenas uma linha e uma variavel 
	(dias * valor_diaria) * 0.92 (que é 100% - 8% de imposto)
	printf("O valor líquido a ser pago é: R$ %.2f\n", (num_dias * 45.00) * 0.92);
	*/
	
	printf("O valor líquido a ser pago é: R$ %.2f\n \n",desconto_imposto);

	
	
		
system ("pause");
return 0;
}
