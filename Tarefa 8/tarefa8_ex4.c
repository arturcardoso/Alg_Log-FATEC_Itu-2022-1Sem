/*
	4. Receber 2 números inteiros e exibir todos 
	os números inteiros existentes entre eles. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
    int i, x, y;
    
    printf (" Digite um número: ");
    scanf ("%i", &x);
    
    printf (" Digite outro número: ");
    scanf ("%i", &y);
    
	//Se o 1º Número for maior que o 2º Número
	for (i=x+1; i<y; i++)
	{
		printf (" %d", i);
	}
	
	//Se o 2º Número for maior que o 1º Número
	for (i=y+1; i<x; i++)
	{
		printf (" %d", i);
	}
	
	//Se os Números são Iguais
	if(x==y)
	printf (" Os números são Iguais");

    return 0;
}






