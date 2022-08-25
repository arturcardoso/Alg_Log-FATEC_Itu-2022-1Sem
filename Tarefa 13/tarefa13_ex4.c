/*
	4. Receber 10 números e armazená-los em um vetor. 
	Ao final, exibir a quantidade de números positivos informados.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, num[10], pos=0;
	
	for (i=0; i<10; i++)
	{
		printf (" Digite o %iº número: ", i+1);
		scanf ("%i", &num[i]);
		
		if (num[i]>=0)
		pos++;
	}
	printf ("\n Quantidade de números positivos: %i", pos);
	
	return 0;
}
