/*
	7. Define-se como elemento minimax de uma matriz o menor elemento da 
	linha onde se encontra o maior elemento da matriz. Faça um programa que recebe uma 
	matriz 4x4 e mostra qual é seu elemento minimax, bem como sua posição na matriz.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int mat[4][4], i, j, linha, coluna, maior, minimax;
	
	printf ("\n Digite valor para os elementos da Matriz 4x4\n\n");

	// Lendo os dados da Matriz
	for(i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
	    	printf(" Elemento[%d][%d] = ", i, j);
	    	scanf("%d", &mat[i][j]);
		}
		printf("\n");
	}

   // Encontrando o maior valor e a linha onde ele se encontra
	maior = mat[0][0];
	for(i=0; i<4; i++)
	{
    	for(j=0; j<4; j++)
    	{
	    	if(mat[i][j] > maior)
			{
		        maior=mat[i][j];
		        linha=i;
	    	}
    	}
	}
	
	printf("\n\n******************* Saida de Dados ********************* \n\n");
	
	// Imprime a Matriz
	for(i=0; i<4; i++)
	{
    	for(j=0; j<4; j++)
    	{
	    	printf ("  %d", mat[i][j]);
    	}
    	printf("\n");
	}
	
	// Encontrando o elemento Minimax.
	minimax = mat[linha][0];
	for(j=1; j<4; j++)
	{
    	if(mat[linha][j] < minimax)
	    {
		minimax = mat[linha][j];
		coluna = j;
		}
	}
	printf("\n Elemento Minimax = %d", minimax);
	printf("\n Posição do Elemento Minimax = [%d][%d]", linha, coluna);
	
	return 0;
}





