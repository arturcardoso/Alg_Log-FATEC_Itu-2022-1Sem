/*
	3. Calcular o IMC (�ndice de Massa Corporal) de uma pessoa atrav�s da f�rmula 
	IMC = Peso (kg) / (Altura * Altura) (m). 
	Informe a classifica��o do IMC na tela de acordo com as regras abaixo:
	
	< 18,5 Abaixo do peso 
	De 18,5 a menor que 25,0 Saud�vel 
	De 25,0 a menor que 30,0 Sobrepeso
	De 30,0 a menor que 35,0 Obesidade Grau I 
	De 35,0 a menor que 40,0 Obesidade Grau II (severa) 
	De 40,0 em diante Obesidade Grau III (m�rbida)
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
		printf ("\nSua classifica��o no IMC � ==Abaixo do Peso==");
	}
	else if (imc < 25)
	{
		printf ("\nSua classifica��o no IMC � ==Saud�vel==");
	}
	else if (imc < 30)
	{
		printf ("\nSua classifica��o no IMC � ==Sobrepeso==");
	}
	else if (imc < 35)
	{
		printf ("\nSua classifica��o no IMC � ==Obesidade Grau I==");
	}
	else if (imc < 40)
	{
		printf ("\nSua classifica��o no IMC � ==Obesidade Grau II (Severa)==");
	}
	else //imc >= 40
	{
		printf ("\nSua classifica��o no IMC � ==Obesidade Grau III (M�rbida)==");
	}
	
	return 0;
}

