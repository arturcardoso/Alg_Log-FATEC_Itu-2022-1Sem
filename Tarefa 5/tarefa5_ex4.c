/*
	4. Calcular a média de um aluno em um semestre com duas provas, onde M = (P1 + P2) / 2. 
    Se a média for maior ou igual a 5 escreva “aprovado”, senão calcule e mostre quanto faltou para atingir 5. 
*/
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	float p1, p2, media, fail;
	
	printf ("Digite a 1º nota: ");
	scanf ("%f", &p1);
	
	printf ("Digite a 2º nota: ");
	scanf ("%f", &p2);
	
	media = (p1 + p2)/2;

	if (media >= 5){
	printf ("Nota %.2f.\nAprovado", media);}
	
	else {
	fail = 5 - media;
	printf("Reprovado por %.2f pontos a menos que o necessario", fail);}
	
	return 0;
}
