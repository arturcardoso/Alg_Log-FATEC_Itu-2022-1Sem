/*
	4. Receber 10 n�meros e armazen�-los em um vetor. 
	Ao final, exibir a quantidade de n�meros positivos informados.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, num[10], pos=0;
	
	for (i=0; i<10; i++)
	{
		printf (" Digite o %i� n�mero: ", i+1);
		scanf ("%i", &num[i]);
		
		if (num[i]>=0)
		pos++;
	}
	printf ("\n Quantidade de n�meros positivos: %i", pos);
	
	return 0;
}
