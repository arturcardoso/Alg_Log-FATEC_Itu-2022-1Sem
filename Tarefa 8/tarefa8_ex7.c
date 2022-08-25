/*
	7. Para 30 alunos da turma de Algoritmos e Programação, receber a média de teoria 
	e a média de laboratório, calcular a média final (final = teoria * 0.6 + laboratório * 0.4). 
	Imprimir a média final de cada aluno. No final, imprimir a média final da classe.
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	float thr[3], prt[3], mAluno[3];
	float soma=0, mClasse;
	
	printf ("\n   ===Algoritmos e Programação=== \n");
	
	for(i=1; i<=3; i++)
	{
		do{
		printf ("\n Digite a nota teórica do %iº aluno: ", i);
		scanf ("%f", &thr[i]);
		
		printf (" Digite a nota prática do %iº aluno: ", i);
		scanf ("%f", &prt[i]);
		
		if(thr[i]<0 || thr[i]>10 || prt[i]<0 || prt[i]>10){
		printf ("\n        !!! ATENÇÂO!!! \n  Umas das Notas está Inválida!\n Digite novamente a nota do aluno.\n");}
		} while(thr[i]<0 || thr[i]>10 || prt[i]<0 || prt[i]>10);
	}
	for(i=1; i<=3; i++)
	{
		printf ("\n Media Teórica do %iº Aluno: %.1f", i, thr[i]*0.6);
		printf ("\n Média Prática do %iº Aluno: %.1f", i, prt[i]*0.4);
		
		mAluno[i] = (thr[i]*0.6)+(prt[i]*0.4);
		printf ("\n Média Final do %iº Aluno: %.1f\n", i, mAluno[i]);
		
		printf ("\n==========:::::]]]]]=||=[[[[[:::::==========\n");
		
		soma+=mAluno[i];
	}
	mClasse = soma/3;
	
	printf ("\n   === A Média da Classe é: %.1f ===", mClasse);
	
	return 0;
}













