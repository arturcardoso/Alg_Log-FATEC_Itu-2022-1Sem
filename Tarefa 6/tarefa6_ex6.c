/*
	6. Implementar uma calculadora onde o usu�rio digita dois n�meros e uma op��o, 
	que deve ser 1 para adi��o, 2 para subtra��o, 3 para multiplica��o e 4 para divis�o. 
	Mostrar na tela caso seja informada uma op��o inv�lida.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int op;
    float n1, n2, n3;
    
    printf ("===CALCULADORA===\n");
    
    printf ("\nDigite o primeiro n�mero: ");
    scanf ("%f", &n1);
    printf ("Digite o segundo n�mero: ");
    scanf ("%f", &n2);
    
    printf ("\n===Op��es de Opera��o===\n");
    printf ("\nDigite 1 para adi��o");
    printf ("\nDigite 2 para subtra��o");
    printf ("\nDigite 3 para multiplica��o");
    printf ("\nDigite 4 para divis�o\n");
    
    printf ("\n=Digite a opera��o: ");
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
