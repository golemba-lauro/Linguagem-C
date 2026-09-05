#include <stdio.h>
#include <stdlib.h>

/*

Contador crescente 
			Operador utilizado < ou <=
			
Contador descrescente
			Operador utilizado > ou >=
			

*/





int main(){
	
	int linha, coluna, altura;
	
	printf("Informe a altura da torre: ");
	scanf("%d", &altura);
	
	for(linha=1; linha <= altura; linha++){ //linha = 1 / inicio // linha++ incremento da linha
		for(coluna=1; coluna <= linha; coluna++){ //coluna = 1 / inicio // coluna ++ incrementar +1 na coluna
		printf("*");
		}
 		printf("\n");
	}

}
