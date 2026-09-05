/*
16. Leia 3 notas e calcule a média aritmética.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int nota1, nota2, nota3;
	float media;

	printf("Digite 3 notas:");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	

	
//	printf("Digite a primeira nota: \n");
//	scanf ("%d", &nota1);
//	printf("Digite a segunda nota: \n");
//	scanf ("%d", &nota2);
//	printf("Digite a terceira nota: \n");
//	scanf ("%d", &nota3);
	
	media = (nota1+nota2+nota3)/3.0;
	
	printf("A media das notas e: %.2f", media);
	
	
return 0;

}
