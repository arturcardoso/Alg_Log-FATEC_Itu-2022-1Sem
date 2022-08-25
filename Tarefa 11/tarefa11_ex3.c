/*
	3. Solicitar quantos números o usuário deseja informar, 
	receber cada um deles e mostrar a média aritmética dos valores positivos no final.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i , j;
	float num[i], soma=0, sub=0, med;
	
	printf ("Quantos números você deseja informar?: ");
	scanf ("%i", &j);
	
	for (i=0; i<j; i++)
	{
		printf ("Digite o %iº número: ", i+1);
		scanf ("%f", &num[i]);
		
		if (num[i] < 0)
		{
			num[i] = num[i]*0;
			
			//Esse sub++ serve para subtrair os números negativos na media aritimética;
			//Você vai entender melhor quando executar o programa.
			sub++;
		}
		
		soma += num[i];
	}
	med = soma / (j-sub);
	printf ("\nA média aritimética é: %.2f", med);
	
	return 0;
}
