#include <stdio.h>
#include <stdlib.h>

/*
FAÇA UM PROGRAMA QUE LEIA UM NUMERO INTEIRO
E INFORME SE ELE É PAR OU NÃO
RESTO DA DIVISAO %
*/

int main(){

    int n1;

    printf("Digite o numero: \n");
    scanf("%d",&n1);

    if (n1 % 2 == 0){
        printf("O numero %d eh PAR \n", n1);
    }else{
        printf("O numero %d eh IMPAR! \n", n1);
    }





return 0;
}
