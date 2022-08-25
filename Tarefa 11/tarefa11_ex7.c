/*
	7. Implemente um programa que imprime a figura abaixo. 
	A quantidade de linhas da figura abaixo dever� ser informada pelo usu�rio, 
	sendo o m�ximo de linhas permitido de 20 linhas, e o m�nimo de 1 linha. 
	No exemplo abaixo a quantidade de linhas � de 4.

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
    printf ("Valor Inv�lido! Digite Novamente.\n\n");
    } while(m < 1 || m > 20);
    
    printf ("\n");
    
    for (i=1; i<=m; i++)
    {
        for (j = 1; j<=i; j++) printf ("*");
        printf ("\n");
    }
    return 0;
}
