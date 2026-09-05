#include <stdio.h>
#include <stdlib.h>

//Alistamento obrigatório


int main(){
	
	
	int idade;
	char sexo;
	
	printf("Digite seu sexo: M para Masculino e F para Feminino: \n");
	scanf("%s", &sexo);
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	if((sexo == 'M' || sexo =='m') && idade == 18)           //condição de comparação lógica - && = porta And / NAO SE USA ; em IF / "||" = porta OR
	printf("Alistamento obrigatorio! \n");
	 else
	printf("Liberado do alistamento. \n");
	
		
	system("pause");
	return 0;
	
	
	
}
