#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
    //locale permite usar acentos
    setlocale(LC_ALL,"");

    //imprime olá
    printf("olá \n");

    //LENDO VALOR INTEIRO - int %d
    int a = 50;
    printf("O valor de a é %d", a); // "%d" é usada para VARIAVEL de num. INTEIROS
    scanf("%d", &a);
    printf("O valor de a mudou para %d \n", a);

    //& - significa endereço na memória

    //LENDO VALOR QUEBRADO - float %f
    float b = 5.5;
    printf("O valor de b é %f", b); // "%f" p/ numeros quebrados
    scanf("%f", &b);
    printf("O valor de a mudou para %f \n", b);

    //LENDO LETRA unica - char %c

    char letra = 't';
    printf("O valor de X é %c \n", letra);
    fflush(stdin); // sempre limpar o buffer se teve algo antes do char
    scanf("%c", &letra);
    printf("O valor de x mudou para %c", letra);


}
