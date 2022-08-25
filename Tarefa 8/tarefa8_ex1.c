/*
	1. Receber 10 números e mostrar o dobro de cada um deles.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
    int x, y[10];
    
    for (x=1; x<=10; ++x)
    {
    	printf (" Digite um número: ");
    	scanf ("%i", &y[x]);
	}
	for (x=1; x<=10; ++x)
    {
    	printf ("%d ", y[x]*2);
	}
    return 0;
}

