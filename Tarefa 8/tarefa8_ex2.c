/*
	2. Receber um número e mostrar sua tabuada do 1 ao 10. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
    int x, tabuada = 0;
    
    printf (" Digite a tabuada que você deseja: ");
    scanf ("%i", &tabuada);
    
    printf ("\n ==Tabuada do %.i==\n", tabuada);
    
    for (x=1; x<=10; ++x)
    {
    	printf ("   %i x %i = %i\n", tabuada, x, tabuada*x);
	}
    return 0;
}

