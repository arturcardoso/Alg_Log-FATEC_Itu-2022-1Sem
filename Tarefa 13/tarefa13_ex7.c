/*
	7. Declarar um vetor de 10 posições já inicializado 
	com os números de 1 a 10 e copiá-los para outro vetor.
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
