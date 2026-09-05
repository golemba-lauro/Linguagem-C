/*
Exercício 5: Cadastro Completo
Proposta: Crie um programa que colete as seguintes informações de um usuário: primeiro nome, idade
e altura. Ao final, exiba todas as informações em uma única frase bem formatada.
Exemplo de Execução:
Digite seu primeiro nome:
Carlos
Digite sua idade:
25
Digite sua altura (em metros):
1.82
Cadastro realizado: Nome: Carlos, Idade: 25 anos, Altura: 1.82m.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char nome[50];
    int idade;
    float altura;

    printf("Digite o seu primeiro nome: \n");
    scanf("%s",nome);
    //tirar DÚVIDA sobre uso & em %s
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    printf("Digite altura (em metros): \n");
    scanf("%f", &altura);

    printf("Cadastro realizado: Nome: %s, Idade: %d anos, Altura: %.2f \n", nome,idade,altura);



system("pause");
return 0;
}
