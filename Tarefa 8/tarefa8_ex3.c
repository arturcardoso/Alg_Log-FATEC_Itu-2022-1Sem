/*
	3. Receber 10 números e informar se cada um deles é negativo, positivo ou nulo.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
    int i, num[10];
    
    for (i=1; i<=10; i++)
    {
    	printf ("Digite o %iº número: ", i);
    	scanf ("%i", &num[i]);
    	
    	if(num[i]<0)
		{
		printf ("%i é Negativo\n\n", num[i]);
		}
		else if(num[i]==0)
		{
		printf ("%i é Nulo\n\n", num[i]);
		}
		else
		{
		printf ("%i é Positivo\n\n", num[i]);
		}
    }
    return 0;
}
