/*Identifca se as palavras sao palindromos pela manipulacao de strings*/

#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int main () 
{
	char palavra[47], contrario[47];
	int tamanho=0, erro=0, i, j;

	fgets(palavra, 47, stdin);
	
	if (palavra[strlen(palavra)-1] == '\n')
	{
		palavra[strlen(palavra) - 1] = '\0';
	}
	
	tamanho = strlen(palavra);
	j = tamanho;
	tamanho++;
	j--;
	
	for(i = 0; palavra[i]; i++)
	{
   		palavra[i] = tolower(palavra[i]);
 	}
	
	for(i=0; i < tamanho; i++) 
	{
		contrario[i] = palavra[j];
	   	j--;
	}
	
	tamanho--;
	
	for(i=0; i < tamanho; i++) 
	{
	   	if(palavra[i] != contrario[i]) { erro = 1; }
	}
	
	if(erro == 1)
	{
		puts("Esta palavra nao e um palindromo");	
	} 
	else 
	{
		puts("Esta palavra e um palindromo");
	}

return 0;	
}
