#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tabuada, i;
	
	for(i=1; i <= 10; i++){
	
	printf("---Tabuada do %d--- \n", i);
		for(tabuada=1; tabuada<=10; tabuada++){
			
				printf("%d x %d = %d \n", i, tabuada, i * tabuada);
				
				}//fim do laço interno (tabuada)
				system("pause"); //solicita apertar qualquer tecla para continuar
				system("cls"); //clearscreen - limpa tela
				//printf("\n");
	}	//fim do laço externo (i)
	
	system("pause");
	return 0;

	
	
	
	
}
