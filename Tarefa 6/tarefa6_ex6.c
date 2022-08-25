/*
	6. Implementar uma calculadora onde o usuário digita dois números e uma opção, 
	que deve ser 1 para adição, 2 para subtração, 3 para multiplicação e 4 para divisão. 
	Mostrar na tela caso seja informada uma opção inválida.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int op;
    float n1, n2, n3;
    
    printf ("===CALCULADORA===\n");
    
    printf ("\nDigite o primeiro número: ");
    scanf ("%f", &n1);
    printf ("Digite o segundo número: ");
    scanf ("%f", &n2);
    
    printf ("\n===Opções de Operação===\n");
    printf ("\nDigite 1 para adição");
    printf ("\nDigite 2 para subtração");
    printf ("\nDigite 3 para multiplicação");
    printf ("\nDigite 4 para divisão\n");
    
    printf ("\n=Digite a operação: ");
    scanf ("%i", &op);

	if (op == 1)
	{
		n3 = n1+n2;
		printf ("\n%.2f + %.2f = %.2f", n1, n2, n3);
	}
		else if (op == 2)
	{
		n3 = n1-n2;
		printf ("\n%.2f - %.2f = %.2f", n1, n2, n3);
	}
	else if (op == 3)
	{
		n3 = n1*n2;
		printf ("\n%.2f - %.2f = %.2f", n1, n2, n3);
	}
	else if (op == 4)
	{
		n3 = n1/n2;
		printf ("\n%.2f / %.2f = %.2f", n1, n2, n3);
	}
	else
	{
		printf ("ERRO!!!");
	}

    return 0;
}
