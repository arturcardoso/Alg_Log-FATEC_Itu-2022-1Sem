/*
	6. Implementar um programa que exibe todos os números inteiros 
	de 1 a 1000 em ordem inversa (1000, 999, 998, ..., 3, 2, 1). 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i;

	printf("\nNúmeros inteiros de 1 a 1000 em ordem inversa \n");

	for(i=1000;i>=0;i--)
	{
	printf(" %d\n", i);
	}
	 return 0;
}

