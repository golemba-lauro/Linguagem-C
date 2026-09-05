#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void preencherMatriz(int matriz[][5], int linhas){
	int x,y;
	
	for(x=0;x<linhas;x++)
	{
		for(y=0;y<5;y++)
		{
		matriz[x][y]= rand() % 100;
		}
	}
	
	printf("\n");

for(x=0;x<linhas;x++)
	{
		for(y=0;y<5;y++)
		{
			printf("%d\t",matriz[x][y]);
		}
		printf("\n");
	}
	
	
}



int main()
{
	srand(time(NULL));
	int x;
	scanf("%d",&x);

	int v[x][5];
	
	preencherMatriz(v,x);
}
