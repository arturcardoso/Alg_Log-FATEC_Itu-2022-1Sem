/*
	8. Fa�a um programa para calcular o peso ideal de uma pessoa. Ao iniciar o programa, 
	pe�a a idade da pessoa, pois o �ndice n�o � preciso para crian�as e pessoas idosas.
	Assim, n�o calcule para pessoas maiores que 65 anos e menores que 12 anos. 
	Atrav�s do sexo (1 para masculino, 2 para feminino) e da altura, calcular o peso ideal de uma pessoa. 
	Receber tamb�m o peso atual dela e indicar se a mesma est� no peso ideal (margem de erro de +- 5%), 
	acima ou abaixo, conforme o c�lculo:
	
	F�rmula do peso ideal do homem: (72.7 * altura) � 62 
	F�rmula do peso ideal da mulher: (62.1 * altura) � 48.7
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int age, sex;
	float altura, peso, peso_ideal, margem_maior, margem_menor;
	
	printf ("               ===Calculadora de Peso Ideal===\n");
	printf ("OBS: N�O calcule para pessoas maiores que 65 anos e menores que 12 anos\n");
	
	printf ("\nDigite a sua Idade: ");
	scanf ("%i", &age);
	
	if (age<12 || age>65)
	{
		printf ("\n===Impossivel Calcular!!!===");
	}
	else
	{
		printf("\n+++Defina o seu sexo+++\n");
		printf("Caso voc� digite im c�digo inv�lido, ele ir� perguntar novamente at� voc� dar um c�digo v�lido");
		
		do{
		printf ("\nDigite 1 para Masculino\nDigite 2 para Feminino\n");
		printf ("\nDigite o seu sexo: ");
		scanf("%i", &sex);
		} while (sex!=1 && sex!=2);
		
		printf ("\nAgora digite a sua altura em metros: ");
		scanf ("%f", &altura);
		
		printf ("Agora diga o seu peso atual em Kg: ");
		scanf ("%f", &peso);
		
		if (sex == 1)
		{
			peso_ideal = (72.7 * altura )- 62;
			printf ("Seu peso ideal � %.2f Kg", peso_ideal)	;
		}
		else
		{
			peso_ideal = (62.1 * altura) - 48.7;
			printf ("Seu peso ideal � %.2f Kg", peso_ideal)	;
		}
		margem_maior = peso_ideal * 1.05; //Margem de erro maior que 5%
		margem_menor = peso_ideal * 0.95; //Margem de erro menor que 5%
		
		printf ("\n\n==Compara��o de seu peso com o peso ideal==\n     OBS: Margem de erro de 5%%");
		
		if (peso > margem_maior)
		{
			printf ("\n\n ==Resultado: Voc� est� acima do peso");
		}
		else if (peso < margem_menor)
		{
			printf ("\n\n ==Resultado: Voc� est� abaixo do peso");
		}
		else
		{
			printf("\n\n ==Resultado: Voc� est� com o peso ideal");
		}
	}
	return 0;
}
