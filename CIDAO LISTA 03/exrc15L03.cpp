/*
15. Solicitar o nome, idade e sexo (F/M) de várias pessoas. Após cada entrada, perguntar se deseja
continuar. Quando encerrar, apresentar a média de idade das mulheres.

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main (){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[50], sexo[10], continuar[10];
	int idade;
	
	int somaIdadeM = 0;
	int totalMulheres = 0;
	float mediaIdadeMulheres;

	
	
	do {
		
		printf("Digite o seu nome: \n");
		scanf(" %s", nome);
		printf("Digite a sua idade: \n");
		scanf("%d",&idade);
		printf("Digite o sexo (M/F): \n)");
		scanf(" %c", &sexo);
			if (sexo == 'F' || sexo == 'f') {
				somaIdadeM = somaIdadeM + idade;
				totalMulheres = totalMulheres + 1;
			}
		
		
		printf("Deseja continuar (S ou N): \n)");
		scanf(" %c", &continuar);
					
		
	} while(continuar == 'S' || continuar == 's');
	
	if (totalMulheres > 0) {
		// CORREÇÃO: Forçar a divisão decimal usando (float).
		mediaIdadeMulheres = (float)somaIdadeM / totalMulheres;
        printf("Foram cadastradas %d mulheres.\n", totalMulheres);
        printf("A média de idade das mulheres é: %.2f anos.\n", mediaIdadeMulheres);
	}else{
		printf("Nenhuma mulher foi cadastrada.\n");
	}
	
					
	system("pause");
	return 0;
}
