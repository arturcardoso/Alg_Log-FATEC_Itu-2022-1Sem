/*
	3. Solicitar quantos n�meros o usu�rio deseja informar, 
	receber cada um deles e mostrar a m�dia aritm�tica dos valores positivos no final.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i , j;
	float num[i], soma=0, sub=0, med;
	
	printf ("Quantos n�meros voc� deseja informar?: ");
	scanf ("%i", &j);
	
	for (i=0; i<j; i++)
	{
		printf ("Digite o %i� n�mero: ", i+1);
		scanf ("%f", &num[i]);
		
		if (num[i] < 0)
		{
			num[i] = num[i]*0;
			
			//Esse sub++ serve para subtrair os n�meros negativos na media aritim�tica;
			//Voc� vai entender melhor quando executar o programa.
			sub++;
		}
		
		soma += num[i];
	}
	med = soma / (j-sub);
	printf ("\nA m�dia aritim�tica �: %.2f", med);
	
	return 0;
}
