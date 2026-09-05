/*
Exercício 2: Manipulação de Matriz
Crie um programa que:
Declare uma matriz 5x5 de inteiros (#define TAM 5).
Tenha uma procedure preencherMatriz(int mat[][TAM], int linhas) que preencha a matriz com
números aleatórios de 1 a 10.
Tenha uma procedure imprimirMatriz(int mat[][TAM], int linhas) que imprima a matriz
formatada.
Tenha uma function somarDiagonalPrincipal(int mat[][TAM], int tam) que retorne a soma dos
elementos da diagonal principal.
Tenha uma function somarAbaixoDiagonal(int mat[][TAM], int tam) que retorne a soma de
todos os elementos que estão abaixo da diagonal principal.
Na main, chame as funções e imprima a matriz, a soma da diagonal e a soma dos elementos
abaixo dela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5



void preencherMatriz(int mat[][TAM], int linhas){
	
	for(int i=0;i<linhas;i++){
		for(int j=0;j<linhas;j++){
			mat[i][j] = (rand()%10+1);
		}
	}
	
	
}

void imprimirMatriz(int mat[][TAM], int linhas){
	
	for(int i=0;i<linhas;i++){
		for(int j=0;j<linhas;j++){
			printf("%3d", mat[i][j]);			
		}
		printf("\n"); // formata em grade
	}
	
}

int somarDiagonalPrincipal(int mat[][TAM], int tam){
	
	int soma=0;
	
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			if (i == j){
			soma = soma + mat[i][j]; 
			}
		}	
	}
	return soma;
}

int somarAbaixoDiagonal(int mat[][TAM], int tam){
	
	int somaAbaixo=0;
	
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			if (i > j){
			somaAbaixo = somaAbaixo + mat[i][j]; 
		}
	}		
	}
	return somaAbaixo;
}


int main(){
	
	srand(time(NULL));
	
	int minhaMatriz[TAM][TAM];
	
	preencherMatriz(minhaMatriz, TAM);
	
	imprimirMatriz(minhaMatriz, TAM);
	
	int resultadoSoma = somarDiagonalPrincipal(minhaMatriz, TAM);
	printf("A soma dos elementos da diagonal principal e de: %d \n", resultadoSoma);
	
	int resultadoSomaAbaixo = somarAbaixoDiagonal(minhaMatriz, TAM);
	printf("A soma de todos os elementos que estão abaixo da diagonal principal e de : %d\n ",resultadoSomaAbaixo);
	
	return 0;
}
