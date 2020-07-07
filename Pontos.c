/*Calculo da distancia entre pontos*/

#include <stdio.h>
#include <math.h>

int main ()
{
	float DistE, X, Y, Z;
	
	struct ponto
	{
		float x;
		float y;
	} ponto1, ponto2;
	
	scanf("%f %f", &ponto1.x, &ponto1.y);
	scanf("%f %f", &ponto2.x, &ponto2.y);
	
	X = ponto1.x - ponto2.x;
	Y = ponto1.y - ponto2.y;
	
	Z = (X*X) + (Y*Y);
	
	DistE = sqrt(Z);
	
	if(DistE < 0.0000001)
	{
		printf("os pontos sao iguais\n");
	}
	else
		printf("os pontos nao sao iguais\n");

return 0;
}
