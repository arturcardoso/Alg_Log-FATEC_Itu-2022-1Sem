/*
	1. Solicitar quantos n�meros o usu�rio deseja informar, 
	receber cada um deles e mostrar a m�dia aritm�tica no final. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i , j;
	float num[i], soma=0, med;
	
	printf ("Quantos n�meros voc� deseja informar?: ");
	scanf ("%i", &j);
	
	for (i=0; i<j; i++)
	{
		printf ("Digite o %i� n�mero: ", i+1);
		scanf ("%f", &num[i]);
		
		soma += num[i];
	}
	med = soma / j;
	printf ("\nA m�dia aritim�tica �: %.2f", med);
	
	return 0;
}
