/*
	5. Receber tr�s n�meros e mostrar qual � o maior deles.
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
    
    if (n1==n2 ==n3)
    {
    printf ("Os n�meros s�o iguais");
	}
	else if (n1 > n2 && n1 > n3)
	{
		printf ("O maior n�mero �: %i", n1);
	}
	else if (n2 > n1 && n2 > n3)
	{
		printf ("O maior n�mero �: %i", n2);
	}
	else if (n3 > n1 && n3 > n2)
	{
		printf ("O maior n�mero �: %i", n3);
	}
    return 0;
}

