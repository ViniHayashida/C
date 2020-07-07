/*Conta quantos caracteres tem a palavra*/

#include <stdio.h>
#include <string.h>

int main ()
{
	char palavra[81];
	int x;

	fgets(palavra, 81, stdin);
	
	for (x = strlen(palavra) - 2; x >= 0; x--)
	{
		printf("%c", palavra[x]);
	}
	
	printf("\n");
	
return 0;
}

