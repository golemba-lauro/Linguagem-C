#include <stdio.h>
#include <stdlib.h>

// solicite um numero limite, o programa deve usar u laço for para somar todos os pares de 1 até o limite


int main(){
	
	int limite, soma, i;
	
	printf("Digite um numero inteiro para ser o limite da soma: ");
		scanf("%d", &limite);
		
		for(i = 0; i <= limite; i = i+2){
			
			soma = soma + i;
			
		
			
		}
   
   
   		printf("a soma dos valores eh: %d", soma);
	
	system("pause");
	return 0;
	

}
