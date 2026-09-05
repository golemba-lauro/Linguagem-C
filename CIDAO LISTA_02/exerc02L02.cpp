/*
2. Elabore um algoritmo que receba, por meio do teclado, dois valores,
um para a variável “a” e um para a variável “b”. Em seguida, faça os
passos que julgar necessário para que ao final, a variável “a” possua o
valor que inicialmente estava em “b” e a variável “b” possua o valor que
inicialmente estava em “a”. Traduza seu algoritmo para a linguagem C e
exiba os valores na tela.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	
	int a,b,x;
	
	printf("Digite o valor de A: \n");
	scanf("%d", &a);
	printf("Digite o valor de B: \n");
	scanf("%d", &b);
	
	printf("==================================================================\n");
	printf("Os valores originais: \n");
	printf("A = %d \n",a);
	printf("B = %d \n",b);
	
	x = a; // A variável X guarda o valor de 'a'
	a = b; // 'a' recebe o valor de 'b'
	b = x; // 'b' recebe o valor original de 'a' que estava em 'X'
	
	printf("==================================================================\n");
	printf("Os valores TROCADOS: \n");
	printf("A = %d \n",a);
	printf("B = %d \n",b);
	
	
system ("pause");
return 0;
}
