/*
	7. Para 30 alunos da turma de Algoritmos e Programa��o, receber a m�dia de teoria 
	e a m�dia de laborat�rio, calcular a m�dia final (final = teoria * 0.6 + laborat�rio * 0.4). 
	Imprimir a m�dia final de cada aluno. No final, imprimir a m�dia final da classe.
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	float thr[3], prt[3], mAluno[3];
	float soma=0, mClasse;
	
	printf ("\n   ===Algoritmos e Programa��o=== \n");
	
	for(i=1; i<=3; i++)
	{
		do{
		printf ("\n Digite a nota te�rica do %i� aluno: ", i);
		scanf ("%f", &thr[i]);
		
		printf (" Digite a nota pr�tica do %i� aluno: ", i);
		scanf ("%f", &prt[i]);
		
		if(thr[i]<0 || thr[i]>10 || prt[i]<0 || prt[i]>10){
		printf ("\n        !!! ATEN��O!!! \n  Umas das Notas est� Inv�lida!\n Digite novamente a nota do aluno.\n");}
		} while(thr[i]<0 || thr[i]>10 || prt[i]<0 || prt[i]>10);
	}
	for(i=1; i<=3; i++)
	{
		printf ("\n Media Te�rica do %i� Aluno: %.1f", i, thr[i]*0.6);
		printf ("\n M�dia Pr�tica do %i� Aluno: %.1f", i, prt[i]*0.4);
		
		mAluno[i] = (thr[i]*0.6)+(prt[i]*0.4);
		printf ("\n M�dia Final do %i� Aluno: %.1f\n", i, mAluno[i]);
		
		printf ("\n==========:::::]]]]]=||=[[[[[:::::==========\n");
		
		soma+=mAluno[i];
	}
	mClasse = soma/3;
	
	printf ("\n   === A M�dia da Classe �: %.1f ===", mClasse);
	
	return 0;
}













