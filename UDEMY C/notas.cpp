#include <stdio.h>
#include <stdlib.h>



int main (){
	
	float nota1, nota2, notaFinal;  // poderia ser DOUBLE
	
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	notaFinal = nota1+nota2;
	
	if (notaFinal<60.){
		printf("REPROVADO");
	}else{
		printf("Nota final = %.1f \n",notaFinal);		
	}
	
	
	
	
	
	return 0;
}
