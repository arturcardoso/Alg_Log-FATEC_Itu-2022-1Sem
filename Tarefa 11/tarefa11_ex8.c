/*
	8. Desenvolver um programa que recebe a quantidade de alunos que estão cursando o 3º semestre. 
   Para cada aluno receber a quantidade de disciplinas que cursou no 2º semestre e também a nota final relativa a cada disciplina.
   Calcular e mostrar a média de cada aluno para verificar o aproveitamento do último semestre cursado.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, j, qtdAL, qtdDis[i];
	float  soma[i], nota[i][j], media[i];
	
	printf (" Digite a quantidade de alunos que estão cursando o 3º semestre: ");
	scanf ("%i", &qtdAL);
	
	printf ("\n Agora digite a quantidade de disciplinas que cada aluno cursou no 2º semestre:\n");
	
	for(i=1; i<=qtdAL; i++)
	{
		printf ("\n\t --Aluno %i: ", i);
		scanf ("%i", &qtdDis[i]);
		
		for(j=1; j<=qtdDis[i]; j++)
		{
			do{
			printf ("    Nota da %iª Disciplina: ", j);
			scanf ("%f", &nota[i][j]);
			
			if(nota[i][j]<0 || nota[i][j]>10)
			printf ("    Nota Inválida! Digite Novamente. \n");
			
			} while (nota[i][j]<0 || nota[i][j]>10);
			
			soma[i]+=nota[i][j];
		}
		media[i] = soma[i]/qtdDis[i];
		printf ("\n  --- Média do %iº Aluno: %.2f ---\n", i, media[i]);
	}
	return 0;
}


