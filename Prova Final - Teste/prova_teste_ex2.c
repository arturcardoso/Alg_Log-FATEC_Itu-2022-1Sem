/*
    2.(4 pontos)  Receba uma matriz de n�meros reais (float) com 5 linhas e 10 colunas. 
    Pe�a para o usu�rio digitar a posi��o de uma linha da matriz.
    Mostrar o somat�rio dos valores da linha digitada pelo usu�rio.
     
    Se o usu�rio selecionar a primeira linha da matriz, 
    mostrar o somat�rio de todos os valores da primeira linha.
     
    Se o usu�rio selecionar a segunda linha da matriz, 
    mostrar o somat�rio de todos os valores da segunda 
    linha da matriz e assim sucessivamente. 
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int l, c, pos;
    float mat[5][10], soma=0;
    char op;
    
    printf ("\n\t=====||||| MATRIZES |||||=====\n");
    
    // Caso queria que os n�meros sejam feitos aleat�riamente (Um B�nus ;P)
    do {
    printf ("\n Gostaria de que o programa gere os n�meros aletoriamente? <S/N>: ");
    op = getche();
	op = toupper(op);
	
	printf("\n\n");
	
    	switch (op)
	    {
	        case 'S': 
			srand(time(NULL));
			
			// O programa gera os valores randomicamente
        	for(l = 0; l < 5; l++)
        	{
        		printf("\t");
                for(c = 0;  c < 10; c++)
        		{
                    mat[l][c] = rand() % 100;
                    printf(" %.1f ", mat[l][c]);
                }
                printf("\n");
            }
	        break;
	        
	        case 'N':
	        // Voc� declara os valores manualmente
			printf (" Digite valor para os elementos da matriz\n\n");
  
        	for (l=0; l<5; l++)
        	{
        	    for (c=0; c<10; c++)
        	    {
        	    	printf (" Elemento[%d][%d] = ", l, c);
        	    	scanf ("%f", &mat[l][c]);
        	    }
        	printf ("\n");
        	}
        	// Imprime a matriz
        	for (l=0; l<5; l++)
    		{
        		for (c=0; c<10; c++)
        		{
        		printf (" %.1f ", mat[l][c]);
        		}
        		printf ("\n");
    		}
    		
	        break;
	        
	        default: 
			printf ("\n Op��o Inv�lida! Responda Corretamente\n");
	        break;
	    }
    } while(op!='S' && op!='N');
    
    // Escolha da posi��o da linha
    do{
    printf ("\n Digite a posi��o de uma linha da matriz (0<pos<5): ");
    scanf ("%i", &pos);
    
    if (pos<0 || pos>=5)
    printf (" Valor Inv�lido! Digite novamente. \n");
    
	} while(pos<0 || pos>=5);
    
    // Faz a soma da linha escolhida
    for (c=0; c<10; c++)
    {
	    soma+=mat[pos][c];
    }
    
    // Imprime o resultado da soma da linha
    printf ("\n Soma dos valores da linha %i: %.2f", pos, soma);

    return 0;
}

