/*
	4. Receber 2 n�meros inteiros e exibir todos 
	os n�meros inteiros existentes entre eles. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
    int i, x, y;
    
    printf (" Digite um n�mero: ");
    scanf ("%i", &x);
    
    printf (" Digite outro n�mero: ");
    scanf ("%i", &y);
    
	//Se o 1� N�mero for maior que o 2� N�mero
	for (i=x+1; i<y; i++)
	{
		printf (" %d", i);
	}
	
	//Se o 2� N�mero for maior que o 1� N�mero
	for (i=y+1; i<x; i++)
	{
		printf (" %d", i);
	}
	
	//Se os N�meros s�o Iguais
	if(x==y)
	printf (" Os n�meros s�o Iguais");

    return 0;
}






