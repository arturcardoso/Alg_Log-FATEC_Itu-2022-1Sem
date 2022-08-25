/*
	1. Faça um programa que recebe uma matriz 4x3 e exibe ela formatada na tela.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, j, num[4][3];
	
	printf ("\n Digite valor para os elementos da matriz\n\n");
  
	for ( i=0; i<4; i++ )
	{
	    for ( j=0; j<3; j++ )
	    {
	    	printf (" Elemento[%d][%d] = ", i, j);
	    	scanf ("%d", &num[i][j]);
	    }
	printf ("\n");
	}
	
printf("\n\n******************* Saida de Dados ********************* \n\n");
	
	for ( i=0; i<4; i++)
	{
		for ( j=0; j<3; j++)
		{
	    	printf (" %d ", num[i][j]);
		}
	printf ("\n");
	}
	
	return 0;
}


