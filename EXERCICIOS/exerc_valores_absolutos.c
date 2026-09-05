#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");

    int nota1, nota2;
    printf("Digite a primeira nota: \n");
    scanf ("%d",&nota1);
    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);

    printf("A diferença entre as notas ABSOLUTA é de: %d \n", abs(nota1 - nota2) );

system ("pause");
return 0;
}
