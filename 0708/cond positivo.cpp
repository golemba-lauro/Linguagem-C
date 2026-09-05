#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int num;
	
	printf("Digite um numero inteiro \n");
	scanf("%d", &num);
	
	if(num<0){  //condição resultante em TRUE
		
		printf("O numero %d eh negativo \n", num);
	}
		 
		else{
			printf("O numero eh 0 ou positivo \n");
		} 
		
	



	printf("Fim do programa!");
	system("pause");
	
}
