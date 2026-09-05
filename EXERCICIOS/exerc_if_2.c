#include <stdio.h>
#include <stdlib.h>

/*
FAÇA UM PROGRAMA QUE  E IMPRIMA NA TELA
QUAL É O MAIOR DELES OU SE SAO IGUAIS

- LEIA DOIS NUMEROS INTEIROS
- IMPRIMA
    QUAL É O MAIOR
            OU
    SE SAO IGUAIS
*/

int main(){

    int a, b;

    printf("Primeiro numero A: \n");
    scanf("%d",&a);
    printf("Segundo numero B: \n");
    scanf("%d",&b);

    if(a > b){ //se A é maior que B
        printf("A maior que B: %d \n",a);
    }else if(b > a){ // SENAO SE
        printf("B maior que A: %d \n", b);
    }else{ //SENAO
        printf("A e B sao iguais: %d %d \n",a,b);
    }


    system ("pause");

}
