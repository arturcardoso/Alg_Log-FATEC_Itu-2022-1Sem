/*
	2. Faça um programa que recebe uma matriz 3x4 e mostrar a soma dos elementos dela.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, j, num[3][4], soma=0;
	
	printf ("\n Digite valor para os elementos da matriz\n\n");
  
	for ( i=0; i<3; i++ )
	{
	    for ( j=0; j<4; j++ )
	    {
	    	printf (" Elemento[%d][%d] = ", i, j);
	    	scanf ("%d", &num[i][j]);
	    	
	    	soma+=num[i][j];
	    }
		printf ("\n");
	}
	
	printf("\n\n******************* Saida de Dados ********************* \n\n");
	
	for ( i=0; i<3; i++)
	{
		for ( j=0; j<4; j++)
		{
	    	printf (" %d ", num[i][j]);
		}
			printf ("\n");
	}
	printf ("\n Valor da Soma = %i", soma);
	
	return 0;
}




