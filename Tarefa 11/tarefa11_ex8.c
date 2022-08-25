/*
	8. Desenvolver um programa que recebe a quantidade de alunos que est�o cursando o 3� semestre. 
   Para cada aluno receber a quantidade de disciplinas que cursou no 2� semestre e tamb�m a nota final relativa a cada disciplina.
   Calcular e mostrar a m�dia de cada aluno para verificar o aproveitamento do �ltimo semestre cursado.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i, j, qtdAL, qtdDis[i];
	float  soma[i], nota[i][j], media[i];
	
	printf (" Digite a quantidade de alunos que est�o cursando o 3� semestre: ");
	scanf ("%i", &qtdAL);
	
	printf ("\n Agora digite a quantidade de disciplinas que cada aluno cursou no 2� semestre:\n");
	
	for(i=1; i<=qtdAL; i++)
	{
		printf ("\n\t --Aluno %i: ", i);
		scanf ("%i", &qtdDis[i]);
		
		for(j=1; j<=qtdDis[i]; j++)
		{
			do{
			printf ("    Nota da %i� Disciplina: ", j);
			scanf ("%f", &nota[i][j]);
			
			if(nota[i][j]<0 || nota[i][j]>10)
			printf ("    Nota Inv�lida! Digite Novamente. \n");
			
			} while (nota[i][j]<0 || nota[i][j]>10);
			
			soma[i]+=nota[i][j];
		}
		media[i] = soma[i]/qtdDis[i];
		printf ("\n  --- M�dia do %i� Aluno: %.2f ---\n", i, media[i]);
	}
	return 0;
}


