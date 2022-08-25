/*
	6. Faça um programa que recebe uma matriz 3x4 e mostra 
	a soma dos elementos de uma linha escolhida pelo usuário. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
    int l, c, mat[3][4], linha, soma=0;

    srand(time(NULL));
    
printf("\n****** Matriz Principal ******* \n\n");

    // preenche a matriz gerando valores aleatórios
	for(l = 0; l < 3; l++)
	{
		printf("\t");
        for(c = 0;  c < 4; c++)
		{
            mat[l][c] = rand() % 100;
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }
    printf("\n\n");
    
    // o usuário faz escolha da linha
    do{
    printf(" Digite a linha desejada (De 1 a 3): ");
    scanf("%i", &linha);
    
    if (linha<1 || linha>3)
    printf (" Linha Inválida! Digite Novamente. \n\n");
    
    }while(linha<1 || linha>3);
    
    // faz a soma da linha desejada
    l=linha-1;
    
    for(c=0; c<4; c++)
	{
	soma+=mat[l][c];
	}
    printf ("\n  Soma da linha: %i", soma);
    
    return 0;
}



