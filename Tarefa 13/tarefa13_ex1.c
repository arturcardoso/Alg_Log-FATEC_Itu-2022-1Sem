/*
	1. Receber 10 n�meros e armazen�-los em um vetor. 
	Ao final, exibir os 10 n�meros na ordem que foram recebidos.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, num[10];
	
	for (i=0; i<10; i++)
	{
		printf (" Digite o %i� n�mero: ", i+1);
		scanf ("%i", &num[i]);
	}
	
	for (i=0; i<10; i++)
	{
		printf (" %i", num[i]);
	}
	
	return 0;
}
