/*
	5. Receber 10 números e armazená-los em um vetor. 
	Ao final, exibir quais foram os números negativos informados. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, num[10], neg=0;
	
	for (i=0; i<10; i++)
	{
		printf (" Digite o %iº número: ", i+1);
		scanf ("%i", &num[i]);
		
		if (num[i]<0)
		neg++;
	}
	printf ("\n Quantidade de números negativos: %i", neg);
	
	return 0;
}
