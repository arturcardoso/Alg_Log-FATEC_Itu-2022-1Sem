/*
	3. Receber 10 números e armazená-los em um vetor. 
	Ao final, exibir o dobro de cada um dos números.
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
		printf (" %i", num[i]*2);
	}
	
	return 0;
}
