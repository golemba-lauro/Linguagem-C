/*
3. Faça um programa em C para trocar o valor de duas variáveis inteiras
sem utilizar nenhuma variável auxiliar.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	
	int a,b;
	
	printf("Digite o valor de A: \n");
	scanf("%d", &a);
	printf("Digite o valor de B: \n");
	scanf("%d", &b);
	
	printf("==================================================================\n");
	printf("Os valores originais: \n");
	printf("A = %d \n",a);
	printf("B = %d \n",b);
	
	a = a + b; //A finalidade deste passo é criar um número X que funcione como uma "chave mestra".
	b = a - b;
	a = a - b;
	
	printf("==================================================================\n");
	printf("Os valores TROCADOS: \n");
	printf("A = %d \n",a);
	printf("B = %d \n",b);
	
	
system ("pause");
return 0;
}
