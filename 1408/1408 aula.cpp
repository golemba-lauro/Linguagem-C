#include <stdio.h>
#include <stdlib.h>


/*

voce precisa criar um programa para o sistema de uma escola que informa automaticamente se um aluno foi aprovado
ficou em recuperaçao ou foi reprovado, com base na sua media final

se a media for maior ou igual a 7 - aprovado
se a media for entre 4.0 e 6.9 recuperaçao
se a media for menor que 4.0, o aluno esta reprovado

*/

int main(){
	
	
	float media;
	
	printf("Digite a media do aluno: \n");
		scanf("%f", &media);
	 if (media >= 7.0) {
	  	printf("O aluno foi aprovado! \n");
		}
	 	
		else if (media >= 4.0 ){
			printf("O aluno esta de recuperacao \n");
			}
			else{
				printf("O aluno foi reprovado. \n");
				}
	
	
	system("pause");
	return 0;
	
	
}
