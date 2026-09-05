#include <stdio.h>
#include <stdlib.h>


int main (){
	
	int i, N;
	float soma, media;
	float porcentagem;
	int qntMenores;
	
	
	printf("Quantas pessoas serao digitadas? ");
	scanf("%d", &N);
	
	char vetNomes[N][50];
	int vetIdade[N];
	float vetAltura[N];
	
	for (i=0; i<N;i++){
		printf("Dados da %da pessoa: \n",i+1);  
		printf("Nome: ");
		fseek(stdin, 0, SEEK_END);
		gets(vetNomes[i]);
		printf("Idade: ");		
		scanf("%d", &vetIdade[i]);
		printf("Altura: ");
		scanf("%f", &vetAltura[i]);		
	}
	
	printf("\n");
	soma = 0;	
	for (i=0; i<N;i++){
		soma = soma + vetAltura[i];		
	}
	media = soma / N;	
	printf("Altura media: ", media);
	
	qntMenores =0; 
		for (i=0; i<N;i++){
		if (vetIdade[i] < 16){
		   qntMenores = qntMenores + 1; // PODERIA ABREVIAR COMO qntMenores++
		}		
	}
	
	
	porcentagem = (qntMenores*100.0) / N;
	
	printf("Pessoas com menos de 16 anos: %.1f %%\n", porcentagem);
	
	for (i=0; i<N;i++){
		if (vetIdade[i] < 16){
		fseek(stdin, 0, SEEK_END);
		printf("%s \n", vetNomes[i]);	
	}	
	}

	
	
	
	
	
	return 0;
}
