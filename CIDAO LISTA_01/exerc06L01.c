/*Exercício 6: Crachá de Evento (Tipo: char[] - String)
Contexto: Você foi contratado para criar um sistema simples para gerar crachás de um evento de
tecnologia. O programa deve solicitar o nome do participante e a empresa onde ele trabalha.
Proposta: Crie um programa que leia o primeiro nome do participante e o nome da empresa. Em
seguida, exiba os dados formatados como um crachá.
Resultado Esperado (Exemplo de Execução):
*** Sistema de Credenciamento Tech Conference ***
Digite seu primeiro nome:
Maria
Digite o nome da sua empresa:
InovaTech
=========================
Crachá Gerado:
Nome: Maria
Empresa: InovaTech
=========================
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char nome[50];
    char empresa[50];

    printf("*** Sistema de Credenciamento Tech Conference *** \n");
    printf("Digite seu primeiro nome: \n");
    scanf("%s",nome);
    printf("Digite o nome da sua empresa: \n");
    scanf("%s",empresa);

    printf("==================== \n");
    printf("Crachá Gerado: \n");
    printf("Nome: %s \n", nome);
    printf ("Empresa: %s \n",empresa);
    printf("==================== \n");




system("pause");
return 0;


}
