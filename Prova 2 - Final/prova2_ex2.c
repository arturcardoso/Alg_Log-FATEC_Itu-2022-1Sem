/*
    Prova Final - Exercício 2
*/
#include <stdio.h>
#include <locale.h>
#define LIN 4
#define COL 7

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int l, c, posLin, coluna=0, mat[LIN][COL], maior=0;
    
    printf ("       =====((( MATRIZES)))=====\n");
    printf ("\n Digite os valores dos Elementos da Matriz 4x7\n");
    printf ("\n ==========(((((((|||||)))))))==========\n\n");
    
    //Recebe os valores
    for(l=0; l<LIN; l++)
    {
        for(c=0; c<COL; c++)
        {
            printf ("  Elemento[%i][%i] = ", l, c);
            scanf ("%i", &mat[l][c]);
        }
        printf ("\n =======((((()))))=======\n\n");
    }
    
    //Recebe o valor da coluna
    do{
        printf (" Digite um valor referente a coluna: ");
        scanf ("%i", &coluna);
        
        if(coluna<0 || coluna>6)
        printf (" Valor Inválido! Digite Novamente.\n\n");
        
    } while(coluna<0 || coluna>6);
    
    //Imprime a matriz completa
	for (l=0; l<LIN; l++)
	{
		for (c=0; c<COL; c++)
		{
	    	printf (" %i ", mat[l][c]);
	    	
	    	//Calclula o maior valor da coluna
	    	if (mat[l][coluna] >= maior)
	    	{
	    	maior=mat[l][coluna];
	    	posLin=l;
	        }
		}
	printf ("\n");
	}
	//Imprime o maior valor da couna escolhida (Bônus: a posição do valor)
	printf ("\n Maior valor da coluna escolhida [%i][%i] = %i", posLin, coluna, maior);
    
    return 0;
}
