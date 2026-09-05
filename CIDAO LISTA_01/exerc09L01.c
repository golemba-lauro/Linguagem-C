/*
Exercício 9: Avaliação de Atendimento (Tipo: char)
Contexto: Uma loja quer um programa simples para registrar a avaliação do atendimento. As opções
são: 'B' para Bom, 'R' para Regular e 'P' para Péssimo.
Proposta: Crie um programa que peça ao usuário para avaliar o atendimento digitando uma das três
letras. O programa deve ler o caractere e exibir uma mensagem de agradecimento confirmando a
avaliação.
Resultado Esperado (Exemplo de Execução):
--- Avaliação de Atendimento ---
Por favor, avalie nosso atendimento (B - Bom, R - Regular, P -
Péssimo):
B
Obrigado por sua avaliação: B.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char avaliacao;

    printf("--- Avaliação de Atendimento --- \n");

    printf("Por favor, avalie nosso atendimento (B - Bom, R - Regular, P - Péssimo): \n");
    scanf("%c",&avaliacao);

    printf("Obrigado por sua avaliação: %c \n",avaliacao);



system("pause");
return 0;


}
