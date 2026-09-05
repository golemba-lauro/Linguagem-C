#include <stdio.h>
#include <stdlib.h>

/*
FAÇA UM PROGRAMA QUE LEIA DOIS NUMEROS INTEIROS E IMPRIMA NA TELA SE A SOMA DELES É:
MAIOR OU IGUAL A 10 OU MENOR QUE 10

-LEIA DOIS NUMEROS INTEIROS
-IMPRIMA NA TELA "SE" A SOMA
    - MAIOR/IGUAL A 10
            OU
    - MENOR QUE 10

*/

int main (){
    int n1, n2, soma;

    printf ("Digite o primeiro numero: \n");
        scanf("%d",&n1);
    printf ("Digite o segundo numero: \n");
        scanf("%d",&n2);
        soma = n1+n2;

    if (soma>=10){
        printf("A soma eh: %d \n", soma);
    }else{
        (n1+n2<10);
        printf ("A soma menor eh: %d \n", soma);
    }

    system ("pause");
}
