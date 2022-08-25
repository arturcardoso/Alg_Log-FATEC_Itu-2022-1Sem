/*
	1. (6 pontos)  Faça um programa que crie um vetor de 10 posições com valores inteiros. 
    Receba todos os valores desse vetor. 
    
    Depois de preencher o vetor receba mais um valor inteiro e armazene em uma variável.
    Mostre na tela a média dos valores armazenado nesse vetor que estão abaixo do valor armazenado na variável:

	Exemplo:

    Se o vetor armazenar os seguintes valores: 1,2,3,4,5,6,7,8,9,10;
    
    Se o valor armazenado na variável for 5.
	Imprimir: 2.5

	Ou seja, imprimir a média dos valores armazenados no vetor abaixo de 5:
	(1 + 2 + 3 + 4)  / 4.0  = 2.5
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num[10], i, var, soma=0;
	float menos, media;
	
	// Declarar os valores
	for (i=0; i<10; i++)
	{
		printf (" Digite o %iº número: ", i+1);
		scanf ("%i", &num[i]);
	}
	
	// Recebe a variavel
	do{
	printf ("\n Digite mais um valor inteiro (1<=var<=10): ");
    scanf ("%i", &var);
    
    if(var<1 || var>10)
    printf (" Valor Inválido! Digite Novamente. \n"); 
    } while(var<1 || var>10);
    
    menos = var-1;
    
    // Faz a soma dos vetores
    for (i=0; i<var-1; i++)
	{
        soma+=num[i];
	}
	media = soma/menos;
	
	// Imprime a média dos valores armazenados no vetor abaixo da variavel
	printf("\n Média = %.1f", media);
    	
	return 0;
}
