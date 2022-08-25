/*
	3. Faça um programa que receba:

	Quantidade de homens.
	Quantidade de mulheres.
	Quantidade de crianças.
	Quantidade de horas de duração de um churrasco.
	
	Calcular e mostrar uma lista de compra de 10 itens para um churrasco, considerando a quantidade de pessoas e a duração do churrasco.
	
	A lista de compras deverá constar:

	- Quantidade de cada item (se for o caso, como quantidade de pão, latas de refrigerante, pacotes, etc..
	- Quilos de cada item (se for o caso), como carne, linguiça, etc...
	
	A lista de compra deverá ter o total a ser comprado.
*/
#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	//1 Var declaration
	int men,women,children,hour;
	float alcatra,maminha,costela,picanha,linguica,farofa,TotalCarne, carvao,refri,cerveja,suco; // suprimentos para o churrasco
      
	//2 input
	printf("\n\t\t  Calculadora para Churrasco :) !\n");
	printf("\n\t========((((({{{{{[[[[[|||||]]]]]}}}}})))))=========\n");
	printf("\nDigite a quantidade de horas: ");
	scanf("%D",&hour);
	printf("Digite a quantidade de homens: ");
	scanf("%d",&men);
	printf("Digite a quantidade de crianças: ");
	scanf("%d",&children);
	printf("Digite a quantidade de mulheres: ");
	scanf("%d",&women); 
    
	//3 Calculo está feito em gramas/hora, ml/hora.	
	alcatra	= (((men*20)+(women*15)+(children*10))*hour)/1000;
	maminha	=(((men*20)+(women*15)+(children*10))*hour)/1000;
	costela	=(((men*20)+(women*15)+(children*10))*hour)/1000;
	picanha	=(((men*20)+(women*15)+(children*10))*hour)/1000;
	linguica=(((men*20)+(women*15)+(children*10))*hour)/1000;
	farofa	=(((men*20)+(women*15)+(children*10))*hour)/1000;
	refri	=(((men*100)+(women*80)+(children*50))*hour)/2000;
	cerveja =(((men*350)+(women*200))*hour)/350;
	suco	=(((men*50)+(women*50)+(children*20))*hour)/1000;
	TotalCarne=alcatra+maminha+costela+picanha+linguica;
	carvao=TotalCarne;
	
	//4 output   
	printf("\n===============================================================");
	printf("\n\nTotal de Alcatra é %.2fKG",alcatra);
	printf("\nTotal de Maminha é %.2fKG",maminha);
	printf("\nTotal de Costela é %.2fKG",costela);
	printf("\nTotal de Picanha é %.2fKG",picanha);
	printf("\nTotal de Linguiça é %.2fKG",linguica);
	printf("\nTotal de farofa é %.2fKG",farofa);
	printf("\nTotal de carvão é %.2fKG",carvao);
	printf("\nTotal de Refrigerante é %.0f Garrafas de 2 litros",refri);
	printf("\nTotal de cerveja é %.0f Latas de 350ml",cerveja);
	printf("\nTotal de suco é %.0f Caixas de 1 litro",suco);
	
	return 0;
}


