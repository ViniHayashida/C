/*Calculo de relacoes entre retangulos no espaco*/

#include <stdio.h>

int main ()
{
	struct ponto
	{
		int x;
		int y;
	} ponto1, ponto2, ponto3, ponto4;
	
	scanf("%i %i", &ponto1.x, &ponto1.y); //inferior esq 1
	scanf("%i %i", &ponto2.x, &ponto2.y); //superior dir 1
	scanf("%i %i", &ponto3.x, &ponto3.y); //inferior esq 2
	scanf("%i %i", &ponto4.x, &ponto4.y); //superior dir 2
	
	if(ponto1.x <= ponto3.x && ponto1.y <= ponto3.y && ponto2.x >= ponto4.x && ponto2.y >= ponto4.y)
	{
		printf("o segundo retangulo esta contido no primeiro\n");
	}
	else
	{
		printf("o segundo retangulo nao esta contido no primeiro\n");
	}
			
return 0;
}
