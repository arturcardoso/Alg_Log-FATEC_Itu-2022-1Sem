/*
	6. Desenvolver um programa que recebe a altura e 
	o sexo (1 para masculino, 2 para feminino) de 15 pessoas. 
    Este programa deverá mostrar no final:
    
	- A menor altura do grupo;
	- A média de altura das mulheres;
	- O número de homens; 
	- O sexo da pessoa mais alta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define qtde 3

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, mulheres=0, homens=0;
	float alt, menor=3, soma=0, maior=0, media=0;
	char sexo, maisAlto;
	
	printf ("\n  ===== COLETA DE DADOS ======");

	for(i=0; i<qtde; i++)
	{
		printf("\n\n     --- %dª Pessoa ---", i+1);
		printf("\n Altura em Metros (Ex: 1,78): ");
		scanf("%f",&alt);
		
		printf(" Sexo: M ou F?: ");
		sexo = getche();
		sexo = toupper(sexo);
	
		if ( sexo == 'M')
		{
		homens++;
		}
	
		else if(sexo == 'F')
		{
		mulheres++;
		soma= soma + alt;
		media = soma/mulheres;
		}
	
		else
		{
		printf("\n Código Inválido! Digite Novamente.\n");
		i=i-1;
		continue;
		}
	
		if(alt > maior)
		{
		maisAlto = sexo;
		maior = alt;
		}
	
		if(alt < menor)
		menor = alt;
	
	}
	printf("\n\n -------------------- RESULTADOS --------------------\n");
	printf(" \n Menor altura do grupo: %.2f metros", menor);
	printf(" \n Média das alturas das mulheres: %.2f metros", media);
	printf(" \n Número de homens: %d", homens);
	printf(" \n O sexo da pessoa mais alta: %c \n\n", maisAlto);

	system("pause");
	return 0;
}
