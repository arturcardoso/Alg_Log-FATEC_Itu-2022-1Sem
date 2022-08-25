/*
	5. Implementar um programa que exibe todos 
	os números pares contidos entre 10 e 80.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
    int i, num;

	for (i=10; i<=80; i++) 
	{
    num = i % 2;
    
    if (num%2 == 0)
	printf (" %d",i);
    }
}
