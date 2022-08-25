/*
	4. Faça um programa que recebe uma matriz 3x3 e gera 
	uma segunda matriz com o dobro de cada valor. No final, 
	exiba a segunda matriz formatada na tela.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
    int l, c, mat[3][3];

    srand(time(NULL));
    
printf("\n****** Matriz Principal ******* \n\n");

    // preenche a matriz gerando valores aleatórios
	for(l = 0; l < 3; l++)
	{
		printf("\t");
        for(c = 0;  c < 3; c++)
		{
            mat[l][c] = rand() % 100;
            printf(" %2d ", mat[l][c]);
        }
        printf("\n");
    }
    
printf("\n\n****** Saida de Dados ****** \n\n");
    
    // imprime a matriz na tela
    for(l = 0; l < 3; l++)
	{
		printf("\t");
        for(c = 0;  c<3; c++)
		{
            printf("%2d  ", mat[l][c]*2);
        }
        printf("\n");
    }
    return 0;
}





