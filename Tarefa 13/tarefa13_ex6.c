/*
	6. Preencher automaticamente um vetor com todos os n�meros pares 
	entre 1 e 100 e depois exibir os n�meros para o usu�rio.
*/

#include<stdio.h>

int main()
{
	int x, y=0, vet[100];
	
	for(x=1;x<=50;x++)
	{
	vet[x]=y+2;
	y=y+2;
 	}
	
	for(x=1;x<=50;x++)
	{
	printf(" %d", vet[x]);
	}
	
	return 0;
}
