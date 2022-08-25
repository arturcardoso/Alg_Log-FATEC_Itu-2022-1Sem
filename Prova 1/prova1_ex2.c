/*
	2-Fa�a uma aplica��o que receba o 3 valores int. Mostre na tela se os valores recebidos s�o (4 pontos):  
	
    -Iguais (se todos os valores recebidos forem iguais), 
    -Parcialmente iguais (se somente dois valores entre os tr�s forem iguais)
    -Diferentes (se todos os valores forem diferentes).  

    Exemplo: Se o usu�rio digitar: 3, 4 e 3, imprimir: Parcialmente iguais.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	printf ("Digite um n�mero inteiro: ");
	scanf("%i", &n1);
	
	printf ("Digite um n�mero inteiro: ");
	scanf("%i", &n2);
	
	printf ("Digite um n�mero inteiro: ");
	scanf("%i", &n3);
	
	if (n1 == n2 && n1 == n3 ) //Iguais
	{
		printf ("\nOs valores s�o Iguais");
	}
	else if (n1==n2 || n2==n3 || n1==n3) //P�rcialmente Iguais
	{
		printf ("\nOs valores s�o parcialmente iguais");
	}
	else
	{
		printf ("\nOs valores s�o diferentes"); //Diferentes
	}
	
	return 0;
}
