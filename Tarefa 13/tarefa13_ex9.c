/*
	9. Receber 10 números e armazená-los em um vetor. 
	Copiar os números em outro vetor na ordem inversa 
	e mostrar na tela todos os índices das posições em 
	que se tem o mesmo número nos dois vetores. 
	
	Exemplo:
	
	1 2 3 1 2 3 1 2 3 1
	1 3 2 1 3 2 1 3 2 1
	
	Índices: 0, 3, 6, 9
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, num[10];
	
	for (i=0; i<10; i++)
	{
		printf (" Digite o %iº número: ", i+1);
		scanf ("%i", &num[i]);
	}
	
	for (i=0; i<10; i++)
	{
		printf (" %i", num[i]);
	}
	
	printf ("\n");
	
	for (i=9; i>=0; i--)
	{
		printf (" %i", num[i]);
	}
	
	return 0;
}













