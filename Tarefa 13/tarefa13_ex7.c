/*
	7. Declarar um vetor de 10 posi��es j� inicializado 
	com os n�meros de 1 a 10 e copi�-los para outro vetor.
*/

#include<stdio.h>

int main()
{
	int x, y=0, vet[10];
	
	for(x=0; x<10; x++)
	{
	vet[x]=y+1;
	y=y+1;
 	}
	
	for(x=0; x<10; x++)
	{
	printf(" %d", vet[x]);
	}
	
	return 0;
}
