/*
Exercício 3: Média de Notas
Proposta: Desenvolva um programa que leia duas notas de um aluno (números de ponto flutuante, ex:
7.5) e calcule a média aritmética simples. Ao final, exiba as notas e a média calculada.
Exemplo de Execução:
Digite a primeira nota:
8.0
Digite a segunda nota:
9.5
A media entre 8.00 e 9.50 e: 8.75
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

float n1,n2,media;

    printf("Digite a PRIMEIRA nota: \n");
    scanf("%f",&n1);
    printf("Digite a SEGUNDA nota: \n");
    scanf("%f",&n2);

    media = (n1 + n2) / 2;

    printf("A média entre %.2f e %.2f é de: %.2f \n",n1,n2,media);
    /*
    PARA EXIBIR DUAS CASAS DECIMAIS ---> (%.2f)
    */



system ("pause");
return 0;
}
