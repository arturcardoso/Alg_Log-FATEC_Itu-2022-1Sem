/*
	2. Receber 10 números e, ao final, 
	informar quantos são positivos e quantos são negativos. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i , num[10], pos=0, neg=0, neutro=0;
	
	for (i=0; i<10; i++)
	{
		printf (" Digite o %iº número: ", i+1);
		scanf ("%i", &num[i]);
		
		if (num[i] < 0)
		{neg++; }
		
		//0 é Neutro
		else if (num[i]==0)
		{neutro++; }
		
		else
		{pos++; }
	}
	printf ("\n===Quantidade de números==\n");
	printf ("\n Números Positívos: %i", pos);
	printf ("\n Números Negatívos: %i", neg);
	printf ("\n Números Netros (Número = 0): %i", neutro);
	
	return 0;
}
