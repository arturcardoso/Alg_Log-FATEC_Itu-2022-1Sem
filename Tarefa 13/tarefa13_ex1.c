/*
	1. Receber 10 números e armazená-los em um vetor. 
	Ao final, exibir os 10 números na ordem que foram recebidos.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, num[10];
	
	for (i=0; i<10; i++)
	{
		printf (" Digite o %iº número: ", i+1);
		scanf ("%i", &num[i]);
	}
	
	for (i=0; i<10; i++)
	{
		printf (" %i", num[i]);
	}
	
	return 0;
}
