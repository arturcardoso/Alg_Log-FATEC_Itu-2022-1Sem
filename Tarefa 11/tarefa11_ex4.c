/*
	4. Receber 10 n�meros e, ao final, informar qual � o maior e o menor deles.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int num, maior, menor;
	int i;

	for(i=0; i<10; i++)
	{
		printf("Entre com o %d� numero inteiro: ",i+1);
		scanf("%i", &num);

		if(num > maior)
		maior = num;
		
		else if(num < menor)
		menor = num;
	}
	printf("\n Menor N�mero: %i", menor);
	printf("\n Maior N�mero: %i", maior);

	return 0;
} 

