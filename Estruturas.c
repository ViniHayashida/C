/*Vinicius Hayashida Viana [245338]*/
/*Tópico 8c*/

#include <stdio.h>

int main () 
{
	float imc;
	
	typedef struct corpo 
	{
		float altura;
		float peso;
		char nome[15];
	} Corpo;
	
	Corpo c1;
	
	scanf("%f", &c1.altura);
	scanf("%f", &c1.peso);
	scanf("%s", c1.nome);
	
	imc = c1.peso / (c1.altura * c1.altura);

	printf("%.3f\n", imc);
	
return 0;
}

