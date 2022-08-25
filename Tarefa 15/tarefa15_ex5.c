/*
	5. Faça um programa que recebe uma matriz 4x4 e exibe os elementos da sua diagonal principal.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale (LC_ALL, "Portuguese");

	int tam = 4;
    int l, c, mat[tam][tam];

    srand(time(NULL));

    // preenche a matriz gerando valores aleatórios
    for(l = 0; l < tam; l++)
	{
        for(c = 0;  c< tam; c++)
		{
			mat[l][c] = rand() % 100;
			printf(" %2d ", mat[l][c]);
        }
        printf("\n");
    }
	// mostra os valores da diagonal
    printf("\n Diagonal principal: ");
    for(l = 0; l < tam; l++)
	{
        printf("%d ", mat[l][l]);
    }
    
    // Bônus ;)
    printf("\n Diagonal secundaria: ");
    for(l = 0; l < tam; l++)
	{
        printf("%d ", mat[l][tam - 1 - l]);
    }
    return 0;
}





