/*
	3. Receber 10 n�meros e informar se cada um deles � negativo, positivo ou nulo.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
    int i, num[10];
    
    for (i=1; i<=10; i++)
    {
    	printf ("Digite o %i� n�mero: ", i);
    	scanf ("%i", &num[i]);
    	
    	if(num[i]<0)
		{
		printf ("%i � Negativo\n\n", num[i]);
		}
		else if(num[i]==0)
		{
		printf ("%i � Nulo\n\n", num[i]);
		}
		else
		{
		printf ("%i � Positivo\n\n", num[i]);
		}
    }
    return 0;
}
