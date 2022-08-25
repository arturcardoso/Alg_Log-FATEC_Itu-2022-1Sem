/*
	Desenvolva uma aplicação que recebe os totais de votos de 3 candidatos, votos nulos e votos em branco.
	
	Receber:

	Total de eleitores.
	Total de votos do candidato 1.
	Total de votos do candidato 2.
	Total de votos do candidato 3.
	Total de votos brancos.
	Total de votos nulos.

	O candidato vencedor deverá ter pelo menos mais que 50% dos votos válidos, votos brancos e nulos não são considerados como votos válidos. (1 ponto)
	Caso tenha um candidato com mais do que 50% dos votos válidos imprimir o número desse candidato, caso contrário  imprimir a mensagem: “Realizar uma nova eleição”. (2 pontos)
	No final da votação mostrar o candidato vencedor (caso tenha) ou a informação "Realizar uma nova eleição"  e finalizar a aplicação. (2 pontos)
	
	No final da votação mostrar o percentual de votos válidos de cada candidato.
	Considerar que todos os eleitores participaram da eleição.
	Validar se o total de eleitores com os votos da eleição para mostrar o resultado.
	
	Exemplo:
	
	Total de Eleitores: 10
	Total Candidato 1: 4 Votos
	Total Candidato 2: 2 Votos
	Total Candidato 3: 1 Votos
	Total Branco: 1
	Total Nulo: 2
	
	Total de Votos Válidos: 7 Votos
	Total de Votos Inválidos: 3 Votos
	Candidato 1 teve 57,14% dos votos válidos (Vencedor)
	Candidato 2 teve 28,57% dos votos válidos 
	Candidato 3 teve 14,28% dos votos válidos
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float vt_1, vt_2, vt_3, vt_b, vt_n, t_elt, vt_vl, vt_invl, pct_1, pct_2, pct_3;
	
	printf("                ===ELEIÇÕES 2022===\n");
	
	printf ("\n   --Regras da Eleição--\n");
	printf ("\n -Será somado o total de votos válidos desta eleição e calulado a porcentagem de cada candidato;");
	printf ("\n -O total de votos validos é igual a soma dos votos de cada candidato;");
	printf ("\n -Votos brancos e nulos não são considerados como votos válidos;");
	printf ("\n -Um candidato será declarado vencedor se ele ter pelo menos mais que 50% dos votos válidos;");
	printf ("\n -Caso contrario será necessário realizar uma nova eleição.\n");
	
printf("\n=====================================================================================================\n");
	
	printf ("\nTotal de Votos do Candidato 1: ");
	scanf ("%f", &vt_1);
	
	printf ("Total de Votos do Candidato 2: ");
	scanf ("%f", &vt_2);
	
	printf ("Total de Votos do Candidato 3: ");
	scanf ("%f", &vt_3);
	
	printf ("Total de Votos Brancos: ");
	scanf ("%f", &vt_b);
	
	printf ("Total de Votos Nulos: ");
	scanf ("%f", &vt_n);
	
	t_elt = vt_1+vt_2+vt_3 +vt_b+vt_n;
	
	printf ("\n--Total de eleitores: %.f --\n", t_elt);
	
printf("\n=====================================================================================================\n");
	
	vt_vl = vt_1+vt_2+vt_3;
	vt_invl = vt_b+vt_n;
	
	printf ("\nTotal de Votos Válidos: %.f", vt_vl);
	printf ("\nTotal de Votos Inválidos: %.f\n", vt_invl);
	
	pct_1 = (vt_1/vt_vl) * 100;
	pct_2 = (vt_2/vt_vl) * 100;
	pct_3 = (vt_3/vt_vl) * 100;

	printf ("\nCandidato 1 teve %.2f%% dos votos válidos", pct_1);
	printf ("\nCandidato 2 teve %.2f%% dos votos válidos", pct_2);
	printf ("\nCandidato 3 teve %.2f%% dos votos válidos\n", pct_3);
	
	if (pct_1 < 50 && pct_2 < 50 && pct_3 < 50)
	{
		printf ("\nRealizar uma nova eleição");
	}
	else
	{
		if (pct_1 > pct_2 && pct_1 > pct_3)
		{
			printf ("\nO vencedor é o Candidato 1, com %.2f%% dos votos validos", pct_1);
		}
		else if (pct_2 > pct_1 && pct_2 > pct_3)
		{
			printf ("\nO vencedor é o Candidato 2, com %.2f%% dos votos validos", pct_2);
		}
		else if (pct_3 > pct_1 && pct_3 > pct_2)
		{
			printf ("\nO vencedor é o Candidato 3, com %.2f%% dos votos validos", pct_3);
		}
	}

	return 0;
}
