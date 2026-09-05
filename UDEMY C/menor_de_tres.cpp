#include <stdio.h>
#include <stdlib.h>



int main (){
	
	int n1, n2, n3;
	
	printf("Primeiro Valor: ");
	scanf("%d", &n1);
	printf("Segundo Valor: ");
	scanf("%d", &n2);
	printf("Terceiro Valor: ");
	scanf("%d", &n3);
	
	if (n1 < n2 && n1 < n3){
		printf("Menor = %d",n1);
	}
	 else if (n2 < n3){
	 	printf("Menor = %d",n2);
	 }
	  else{
	  	printf("Menor = %d",n3);
	  }
	
	
	
	return 0;
}
