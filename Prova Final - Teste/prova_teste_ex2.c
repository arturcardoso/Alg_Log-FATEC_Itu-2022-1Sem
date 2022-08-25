/*
    2.(4 pontos)  Receba uma matriz de números reais (float) com 5 linhas e 10 colunas. 
    Peça para o usuário digitar a posição de uma linha da matriz.
    Mostrar o somatório dos valores da linha digitada pelo usuário.
     
    Se o usuário selecionar a primeira linha da matriz, 
    mostrar o somatório de todos os valores da primeira linha.
     
    Se o usuário selecionar a segunda linha da matriz, 
    mostrar o somatório de todos os valores da segunda 
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
    
    // Caso queria que os números sejam feitos aleatóriamente (Um Bônus ;P)
    do {
    printf ("\n Gostaria de que o programa gere os números aletoriamente? <S/N>: ");
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
	        // Você declara os valores manualmente
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
			printf ("\n Opção Inválida! Responda Corretamente\n");
	        break;
	    }
    } while(op!='S' && op!='N');
    
    // Escolha da posição da linha
    do{
    printf ("\n Digite a posição de uma linha da matriz (0<pos<5): ");
    scanf ("%i", &pos);
    
    if (pos<0 || pos>=5)
    printf (" Valor Inválido! Digite novamente. \n");
    
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

