/*
	5. Receber três números e mostrar qual é o maior deles.
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
    
    if (n1==n2 ==n3)
    {
    printf ("Os números são iguais");
	}
	else if (n1 > n2 && n1 > n3)
	{
		printf ("O maior número é: %i", n1);
	}
	else if (n2 > n1 && n2 > n3)
	{
		printf ("O maior número é: %i", n2);
	}
	else if (n3 > n1 && n3 > n2)
	{
		printf ("O maior número é: %i", n3);
	}
    return 0;
}

