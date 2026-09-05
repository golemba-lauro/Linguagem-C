#include <stdio.h>
#include <stdlib.h>

//calcular a media final de ua turma com numero fixo de alunos
// variavel = variavel + valor que quero acumular

int main(){
	
	int i, aluno;
	float nota, soma, media;
	
	printf("Digite a quantidade de alunos: ");
		scanf("%d", &aluno);
		for(i= 1; i <= aluno; i++){
			
			printf("Digite a nota do %d aluno: ", i);
				scanf("%f", &nota);
				soma = soma + nota;	
			
		}
	
	media =  soma / aluno;
	
	printf("Quantidade de alunos: %d \n", aluno);
	printf("Total de notas: %.2f \n", soma);
	
	printf("A media final da turma eh: %.2f", media);
	
	
	system("pause");
	return 0;	
	
	
	
}
