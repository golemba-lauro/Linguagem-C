/*
3. Sobre um jogo, solicitar o número de moedas coletadas. Se for múltiplo de 50, informar que o
jogador ganhou uma vida extra; caso contrário, informar quantas moedas faltam para ganhar a
próxima vida
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int totalMoedas, resto;
	
	
	printf("Digite o numero de moedas:");
	scanf("%d", &totalMoedas);
	

	  if (totalMoedas < 0) {
        printf("\nO número de moedas não pode ser negativo!\n");
	}
	else if (totalMoedas > 0 && totalMoedas % 50 == 0){
		printf("PARABENS Ganhou uma VIDA EXTRA! \n");
		}
		else{
			// O cálculo é 50 menos o resto da divisão das moedas por 50.
        	// Exemplo: 60 moedas -> 60 % 50 = 10 -> Faltam 50 - 10 = 40 moedas.
        	resto = 50 - (totalMoedas % 50);
        	printf("\nContinue assim! Faltam %d moedas para ganhar a próxima vida.\n", resto);
		}
			
		
	system("pause");
	return 0;
}

