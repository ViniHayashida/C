/*Calcula e imprime a matriz transposta*/

#include<stdio.h>

#define N 20

int main()
{
	int matriz[N][N], mtransposta[N][N];
	int nlin, ncol, l, c;
	
	scanf("%d %d", &nlin, &ncol);
	
	for(l = 0; l < nlin; l++)
	{
		for(c = 0; c < ncol; c++)
		{
			scanf("%d", &matriz[l][c]);
		}
	}
	
	for(l = 0; l < nlin; l++)
	{
		for(c = 0; c < ncol; c++)
		{
			mtransposta[c][l] = matriz[l][c];
		}
	}	
	
	for(l = 0; l < ncol; l++)
	{
		for(c = 0; c < nlin; c++)
		{
			printf("%d ", mtransposta[l][c]);
		}
		printf("\n");
	}	
	
return 0;
}
