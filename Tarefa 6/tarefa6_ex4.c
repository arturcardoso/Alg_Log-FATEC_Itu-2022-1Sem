/*
	4. Receber três números e dizer se existe algum número repetido entre eles. 
	Em caso afirmativo, mostre qual o número esta repetido.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int n1, n2, n3;
    
    printf ("Digite o primeiro número: ");
    scanf ("%i", &n1);
    printf ("Digite o segundo número: ");
    scanf ("%i", &n2);
    printf ("Digite o terceiro número: ");
    scanf ("%i", &n3);
    
    if (n1==n2|| n1==n3)
    {
    	printf ("Existem números repitidos!\nO número repitido é: %i", n1);
	}
	else if (n2==n3)
    {
    	printf ("Existem números repitidos!\nO número repitido é: %i", n2);
	} 
	else
	{
		printf ("Não existem números repetidos");
	}
	return 0;
}
    
