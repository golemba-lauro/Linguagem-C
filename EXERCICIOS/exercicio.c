#include <stdio.h>
#include <stdlib.h>
// exercicio para multiplicacao de 3 numeros inteiros de uma so vez
int main (){

	int n1,n2,n3,resultado;

	printf("Digite as 3 notas: \n");
	scanf("%d %d %d",&n1,&n2,&n3);
    resultado=n1*n2*n3;
	printf("A multiplicacao entre os numeros inteiros eh de: %d \n", resultado);

	system ("pause");

	}
