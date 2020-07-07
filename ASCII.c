/*Tabela ASCII*/

#include <stdio.h>

int main () {
	int ch;
	
	printf("Char\t");
	printf("Dec\t");
	printf("Hx\t");
	printf("\n");
	 
	for(ch=32; ch<=255; ch++){
		printf("%c\t", ch);
		printf("%d\t", ch);
		printf("%x\t", ch);
		printf("\n");
	}	
return 0;
}
