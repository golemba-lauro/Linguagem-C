#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale (LC_ALL,"");

    float nota1, nota2, resultado;
    printf("Digite a primeira nota: \n");
    scanf("%f",&nota1);
    printf ("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    resultado = ((nota1+nota2)/2);
    printf ("A média das notas é de: %f", resultado);

    system("pause");
    return 0;

}
