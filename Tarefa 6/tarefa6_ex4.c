/*
	4. Receber tr�s n�meros e dizer se existe algum n�mero repetido entre eles. 
	Em caso afirmativo, mostre qual o n�mero esta repetido.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int n1, n2, n3;
    
    printf ("Digite o primeiro n�mero: ");
    scanf ("%i", &n1);
    printf ("Digite o segundo n�mero: ");
    scanf ("%i", &n2);
    printf ("Digite o terceiro n�mero: ");
    scanf ("%i", &n3);
    
    if (n1==n2|| n1==n3)
    {
    	printf ("Existem n�meros repitidos!\nO n�mero repitido �: %i", n1);
	}
	else if (n2==n3)
    {
    	printf ("Existem n�meros repitidos!\nO n�mero repitido �: %i", n2);
	} 
	else
	{
		printf ("N�o existem n�meros repetidos");
	}
	return 0;
}
    
