/*
	1. Receber 10 n�meros e mostrar o dobro de cada um deles.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
    int x, y[10];
    
    for (x=1; x<=10; ++x)
    {
    	printf (" Digite um n�mero: ");
    	scanf ("%i", &y[x]);
	}
	for (x=1; x<=10; ++x)
    {
    	printf ("%d ", y[x]*2);
	}
    return 0;
}

