#include <stdio.h>
#include <stdlib.h>

//3 numeros e apresentar o maior

int main(){
	
	
	int a, b , c;
	
	
	
	printf("Digite o primeiro numero inteiro: \n");
		scanf("%d", &a);
	printf("Digite o segundo numero inteiro: \n");
		scanf("%d", &b);
	printf("Digite o terceiro numero inteiro: \n");
		scanf("%d", &c);
		
	if ((a >= b) && a >= c){
		printf("O maior numero e: %d \n", a);
	} else {
		if ((b >= a) && b >= c)
		printf("O maior numero e: %d \n", b);
		else
		printf("O maior numero eh: %d \n", c);
	}
	

	
	
	system("pause");
	return 0;
}
