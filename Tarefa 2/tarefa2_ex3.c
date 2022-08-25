/*
	3. A disciplina Algoritmos e Programação é dividida em duas partes: 
	teoria e prática. Na teoria, são aplicadas duas provas (com nota de 0 a 10 cada). 
	Na prática também vale a mesma fórmula. As notas das duas partes se juntam no final 
	do semestre para compor a nota do aluno na disciplina, mas a teoria tem peso de 60%, enquanto a prática tem peso de 40%. 
	Receba as notas de um aluno em cada prova teórica e prática e mostre a nota final do semestre dele na disciplina.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
	int theory, pratice;
	float finalgrade;
	
	printf ("Digite a nota do aluno na teoria: ");
	scanf ("%i", &theory);
	
	printf ("Digite a nota do aluno na prática: ");
	scanf ("%i", &pratice);

	finalgrade = (0.6*pratice) + (0.4*theory);
	
	printf("\nA nota final é : %.2f", finalgrade);
  
	return 0;
}
