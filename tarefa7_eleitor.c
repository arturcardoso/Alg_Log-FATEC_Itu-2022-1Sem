/*
	Desenvolva uma aplica��o que recebe os totais de votos de 3 candidatos, votos nulos e votos em branco.
	
	Receber:

	Total de eleitores.
	Total de votos do candidato 1.
	Total de votos do candidato 2.
	Total de votos do candidato 3.
	Total de votos brancos.
	Total de votos nulos.

	O candidato vencedor dever� ter pelo menos mais que 50% dos votos v�lidos, votos brancos e nulos n�o s�o considerados como votos v�lidos. (1 ponto)
	Caso tenha um candidato com mais do que 50% dos votos v�lidos imprimir o n�mero desse candidato, caso contr�rio  imprimir a mensagem: �Realizar uma nova elei��o�. (2 pontos)
	No final da vota��o mostrar o candidato vencedor (caso tenha) ou a informa��o "Realizar uma nova elei��o"  e finalizar a aplica��o. (2 pontos)
	
	No final da vota��o mostrar o percentual de votos v�lidos de cada candidato.
	Considerar que todos os eleitores participaram da elei��o.
	Validar se o total de eleitores com os votos da elei��o para mostrar o resultado.
	
	Exemplo:
	
	Total de Eleitores: 10
	Total Candidato 1: 4 Votos
	Total Candidato 2: 2 Votos
	Total Candidato 3: 1 Votos
	Total Branco: 1
	Total Nulo: 2
	
	Total de Votos V�lidos: 7 Votos
	Total de Votos Inv�lidos: 3 Votos
	Candidato 1 teve 57,14% dos votos v�lidos (Vencedor)
	Candidato 2 teve 28,57% dos votos v�lidos 
	Candidato 3 teve 14,28% dos votos v�lidos
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float vt_1, vt_2, vt_3, vt_b, vt_n, t_elt, vt_vl, vt_invl, pct_1, pct_2, pct_3;
	
	printf("                ===ELEI��ES 2022===\n");
	
	printf ("\n   --Regras da Elei��o--\n");
	printf ("\n -Ser� somado o total de votos v�lidos desta elei��o e calulado a porcentagem de cada candidato;");
	printf ("\n -O total de votos validos � igual a soma dos votos de cada candidato;");
	printf ("\n -Votos brancos e nulos n�o s�o considerados como votos v�lidos;");
	printf ("\n -Um candidato ser� declarado vencedor se ele ter pelo menos mais que 50% dos votos v�lidos;");
	printf ("\n -Caso contrario ser� necess�rio realizar uma nova elei��o.\n");
	
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
	
	printf ("\nTotal de Votos V�lidos: %.f", vt_vl);
	printf ("\nTotal de Votos Inv�lidos: %.f\n", vt_invl);
	
	pct_1 = (vt_1/vt_vl) * 100;
	pct_2 = (vt_2/vt_vl) * 100;
	pct_3 = (vt_3/vt_vl) * 100;

	printf ("\nCandidato 1 teve %.2f%% dos votos v�lidos", pct_1);
	printf ("\nCandidato 2 teve %.2f%% dos votos v�lidos", pct_2);
	printf ("\nCandidato 3 teve %.2f%% dos votos v�lidos\n", pct_3);
	
	if (pct_1 < 50 && pct_2 < 50 && pct_3 < 50)
	{
		printf ("\nRealizar uma nova elei��o");
	}
	else
	{
		if (pct_1 > pct_2 && pct_1 > pct_3)
		{
			printf ("\nO vencedor � o Candidato 1, com %.2f%% dos votos validos", pct_1);
		}
		else if (pct_2 > pct_1 && pct_2 > pct_3)
		{
			printf ("\nO vencedor � o Candidato 2, com %.2f%% dos votos validos", pct_2);
		}
		else if (pct_3 > pct_1 && pct_3 > pct_2)
		{
			printf ("\nO vencedor � o Candidato 3, com %.2f%% dos votos validos", pct_3);
		}
	}

	return 0;
}
