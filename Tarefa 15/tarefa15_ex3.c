/*
	3. Faça um programa que recebe uma matriz 5x3 e informa qual é o maior elemento dela.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, j, num[5][3], maior=0;
	
	printf ("\n Digite valor para os elementos da matriz\n\n");
  
	for ( i=0; i<5; i++ )
	{
	    for ( j=0; j<3; j++ )
	    {
	    	printf (" Elemento[%d][%d] = ", i, j);
	    	scanf ("%d", &num[i][j]);
	    	
	    	if (num[i][j] >= maior)
	    	maior=num[i][j];
	    }
	printf ("\n");
	}
	
	printf("\n\n******************* Saida de Dados ********************* \n\n");
	
	for ( i=0; i<5; i++)
	{
		for ( j=0; j<3; j++)
		{
	    	printf (" %d ", num[i][j]);
		}
	printf ("\n");
	}
	printf ("\n Maior = %i", maior);
	
	return 0;
}



