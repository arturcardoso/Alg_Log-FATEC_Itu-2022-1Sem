/*
	5. A prefeitura de uma cidade de 15 habitantes fez uma 
	pesquisa coletando sal�rio e n�mero de filhos de cada um. 
	
    A prefeitura deseja saber: 
   
   - m�dia do sal�rio da popula��o; 
   - m�dia do n�mero de filhos; 
   - maior sal�rio; 
   - percentual de pessoas com sal�rio at� R$ 500,00. 
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, p500=0, filhos[i], somF=0; //p500 = Pessoas com sal�rio at� R$500,00.
	float salary[i], somSal, medSal, medFil, maior, per500; //per500 = Percentual de pessoas com sal�rio at� R$ 500,00.
	
	printf ("\n  ===== PESQUISA DO IBGE ======\n");
	
	for (i=0; i<15; i++)
	{
		printf ("\n Digite o sal�rio da %i� Pessoa: ", i+1);
		scanf ("%f", &salary[i]);
		
		if (salary[i] > maior)
		{maior = salary[i];}
		
		if (salary[i] <= 500)
		{p500++;}
		
		somSal+=salary[i];
		
		do{
		printf (" Digite o n� de filhos da %i� pessoa: ", i+1);
		scanf ("%i", &filhos[i]);
		
		if (filhos[i]<0 || filhos[i]>57)
		printf(" Op��o Inv�lida! Digite Novamente\n");
		
		} while(filhos[i]<0 || filhos[i]>57); //57 filhos � o maior n� registrado no Brasil.
		
		somF+=filhos[i];
	}
	medSal = somSal/15; //Media de Sal�rio.
	per500 = (p500/15.00)*100; //Percentual de pessoas com sal�rio at� R$ 500,00.
	
	medFil = somF/15.0; //Media do N�mero de Filhos.
	
	printf("\n\n --------------- RESULTADOS DA PESQUISA ---------------\n");
	
	printf ("\n M�dia de Sal�rio por Pessoa: R$ %.2f", medSal);
	printf ("\n M�dia do N�mero de Filhos por Pessoa: %.0f", medFil);
	printf ("\n Maior Sal�rio: R$ %.2f", maior);
	printf ("\n Percentual de Pessoas com sal�rio at� R$500,00: %.1f%%", per500);
	
	return 0;
}



