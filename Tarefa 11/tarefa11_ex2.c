/*
	2. Receber 10 n�meros e, ao final, 
	informar quantos s�o positivos e quantos s�o negativos. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i , num[10], pos=0, neg=0, neutro=0;
	
	for (i=0; i<10; i++)
	{
		printf (" Digite o %i� n�mero: ", i+1);
		scanf ("%i", &num[i]);
		
		if (num[i] < 0)
		{neg++; }
		
		//0 � Neutro
		else if (num[i]==0)
		{neutro++; }
		
		else
		{pos++; }
	}
	printf ("\n===Quantidade de n�meros==\n");
	printf ("\n N�meros Posit�vos: %i", pos);
	printf ("\n N�meros Negat�vos: %i", neg);
	printf ("\n N�meros Netros (N�mero = 0): %i", neutro);
	
	return 0;
}
