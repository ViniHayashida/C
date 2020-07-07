/*Programa que le as dimens�es e os dados de
duas matrizes bidimensionais (m�ximo 20 linhas e 20
colunas) e imprima na tela o resultado da multiplica��o
destas duas matrizes. Caso as dimens�es das duas matrizes
n�o permitam a multiplica��o, o usu�rio dever� ser
notificado.*/

#include <stdio.h>
#define N 20

int main ()
{
	int mA[N][N], mB[N][N], mMulti[N][N];
	int nlinA, nlinB, ncolA, ncolB;
	int lin, col, k;
	
	scanf("%d %d", &nlinA, &ncolA);
	scanf("%d %d", &nlinB, &ncolB);
	
	if(ncolA == nlinB)
	{
		printf("Insira a matriz A: ");
		
		for(lin = 0; lin < nlinA; lin++)
		{
			for(col = 0; col < ncolA; col++)
			{
				scanf("%d", &mA[lin][col]);
			}
		}
		
		printf("Insira a matriz B: ");
		
		for(lin = 0; lin < nlinB; lin++)
		{
			for(col = 0; col < ncolB; col++)
			{
				scanf("%d", &mB[lin][col]);
			}
		}
		
		for (lin = 0; lin < nlinA; lin++)
		{
      		for (col = 0; col < nlinA; col++) 
			{
        		for (k = 0; k < ncolA; k++) 
				{
          			mMulti[lin][col] = mMulti[lin][col] + (mA[lin][k] * mB[k][col]); 

        		}

      		}
    
    	}	
    	for (lin = 0; lin < nlinA; lin++) 
		{
      		for (col = 0; col < ncolB; col++) 
			{
        		printf("%d ", mMulti[lin][col]);
			}
			printf("\n");
		}
	}
	
	else
	{
		printf("As dimensoes das matrizes nao permitem a multiplicacao\n");
	}
		
return 0;
}
