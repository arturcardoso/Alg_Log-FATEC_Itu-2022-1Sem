/*
	5. A prefeitura de uma cidade de 15 habitantes fez uma 
	pesquisa coletando salário e número de filhos de cada um. 
	
    A prefeitura deseja saber: 
   
   - média do salário da população; 
   - média do número de filhos; 
   - maior salário; 
   - percentual de pessoas com salário até R$ 500,00. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, p500=0, filhos[i], somF=0; //p500 = Pessoas com salário até R$500,00.
	float salary[i], somSal, medSal, medFil, maior, per500; //per500 = Percentual de pessoas com salário até R$ 500,00.
	
	printf ("\n  ===== PESQUISA DO IBGE ======\n");
	
	for (i=0; i<15; i++)
	{
		printf ("\n Digite o salário da %iª Pessoa: ", i+1);
		scanf ("%f", &salary[i]);
		
		if (salary[i] > maior)
		{maior = salary[i];}
		
		if (salary[i] <= 500)
		{p500++;}
		
		somSal+=salary[i];
		
		do{
		printf (" Digite o nº de filhos da %iª pessoa: ", i+1);
		scanf ("%i", &filhos[i]);
		
		if (filhos[i]<0 || filhos[i]>57)
		printf(" Opção Inválida! Digite Novamente\n");
		
		} while(filhos[i]<0 || filhos[i]>57); //57 filhos é o maior nº registrado no Brasil.
		
		somF+=filhos[i];
	}
	medSal = somSal/15; //Media de Salário.
	per500 = (p500/15.00)*100; //Percentual de pessoas com salário até R$ 500,00.
	
	medFil = somF/15.0; //Media do Número de Filhos.
	
	printf("\n\n --------------- RESULTADOS DA PESQUISA ---------------\n");
	
	printf ("\n Média de Salário por Pessoa: R$ %.2f", medSal);
	printf ("\n Média do Número de Filhos por Pessoa: %.0f", medFil);
	printf ("\n Maior Salário: R$ %.2f", maior);
	printf ("\n Percentual de Pessoas com salário até R$500,00: %.1f%%", per500);
	
	return 0;
}



