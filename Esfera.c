/*Calculo do volume da esfera utilizando a modularização de programas*/

#include <stdio.h>
#include <math.h>

float volume_esfera (float raio)
{
	float V;
	V = (4 * 3.14159 * (pow(raio, 3))) / 3;
return V;
}

int main ()
{
	float raio;
	
	scanf("%f", &raio);
	
	printf("%.2f \n", volume_esfera(raio));
return 0;
}
