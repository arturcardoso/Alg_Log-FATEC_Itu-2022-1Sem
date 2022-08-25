/*
	7. Implemente um programa que imprime a figura abaixo. 
	A quantidade de linhas da figura abaixo deverá ser informada pelo usuário, 
	sendo o máximo de linhas permitido de 20 linhas, e o mínimo de 1 linha. 
	No exemplo abaixo a quantidade de linhas é de 4.

	*
	**
	***
	****
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
    int m, i, j;
    
    do{
    printf ("Digite um valor entre 1 e 20: ");
    scanf("%d", &m);
    
    if(m < 1 || m > 20)
    printf ("Valor Inválido! Digite Novamente.\n\n");
    } while(m < 1 || m > 20);
    
    printf ("\n");
    
    for (i=1; i<=m; i++)
    {
        for (j = 1; j<=i; j++) printf ("*");
        printf ("\n");
    }
    return 0;
}
