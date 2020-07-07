/*Calculo de lucro e do numero de produts vendidos*/

#include <stdio.h>

int main() {
	int qtd[10], i, j, k, somaY=0;
	float valor[10], lucroX=0.0;
	
	for(i=0; i<10; i++){
		scanf("%d", &qtd[i]);
	}
	
	for(j=0; j<10; j++){
		scanf("%f", &valor[j]);
	}
	
	for(k=0; k<10; k++){
		somaY += qtd[k];
		lucroX += valor[k] * qtd[k];
	}
	
	printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d", lucroX, somaY);

return 0;
}
