/*
4. Solicitar o nível de energia do personagem (0 a 100). Se for menor que 30, informar “Energia
crítica”; se for entre 30 e 70, informar “Energia estável”; se for acima de 70, informar “Energia
máxima”
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int energia;
	
	printf("Digite a energia do personagem:");
	scanf("%d", &energia);
	
	if (energia < 30){
		printf("Energia critica \n");
	}else if (energia <= 70){
		printf("Energia estavel \n");
	}else{
		printf("Energia Maxima \n");
		
	}
			
	system("pause");
	return 0;
}

