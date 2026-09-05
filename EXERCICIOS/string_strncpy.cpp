#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	
	char str1[15] = "Linguagem C";
	char str2 [7];
	
	strncpy (str2, str1, 6);
	str2[6] = '\0';
	
	printf("str2 = %s\n", str2);
	
	system("pause");
	return 0;
	
	
}
