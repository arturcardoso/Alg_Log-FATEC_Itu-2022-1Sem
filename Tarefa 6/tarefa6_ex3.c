/*
	3. Calcular o IMC (Índice de Massa Corporal) de uma pessoa através da fórmula 
	IMC = Peso (kg) / (Altura * Altura) (m). 
	Informe a classificação do IMC na tela de acordo com as regras abaixo:
	
	< 18,5 Abaixo do peso 
	De 18,5 a menor que 25,0 Saudável 
	De 25,0 a menor que 30,0 Sobrepeso
	De 30,0 a menor que 35,0 Obesidade Grau I 
	De 35,0 a menor que 40,0 Obesidade Grau II (severa) 
	De 40,0 em diante Obesidade Grau III (mórbida)
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

    float weight, height, imc;

	printf("Digite o seu peso em Kg: ");
	scanf("%f",&weight);
	
	printf("Agora digite a sua altura em Metros: ");
	scanf ("%f", &height);
	
	imc = weight / (height * height);
	printf("IMC = %.2f", imc);
	
	if (imc < 18.5)
	{
		printf ("\nSua classificação no IMC é ==Abaixo do Peso==");
	}
	else if (imc < 25)
	{
		printf ("\nSua classificação no IMC é ==Saudável==");
	}
	else if (imc < 30)
	{
		printf ("\nSua classificação no IMC é ==Sobrepeso==");
	}
	else if (imc < 35)
	{
		printf ("\nSua classificação no IMC é ==Obesidade Grau I==");
	}
	else if (imc < 40)
	{
		printf ("\nSua classificação no IMC é ==Obesidade Grau II (Severa)==");
	}
	else //imc >= 40
	{
		printf ("\nSua classificação no IMC é ==Obesidade Grau III (Mórbida)==");
	}
	
	return 0;
}

