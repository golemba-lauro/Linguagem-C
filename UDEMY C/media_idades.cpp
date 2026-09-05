#include <stdlib.h>
#include <stdio.h>



int main (){
	
	int idades;
	int soma=0;
	int qnt=0;
	double media;
	
	printf("Digite as idades: \n");
	scanf("%d", &idades);
	
	
	
	while (idades >= 0){
		soma = soma + idades;
		qnt = qnt + 1;				
		scanf("%d", &idades);
	}
	
	if(qnt == 0){
		printf("IMPOSSIVEL CALCULAR\n");
	} else{
		media = (double)soma / qnt;
		printf("MEDIA = %.2lf\n", media);
	}
	
	
	
	
	
	
	return 0;
}
