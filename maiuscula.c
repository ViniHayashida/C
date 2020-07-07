/*Transforma minuscula em maiuscula*/

#include<stdio.h>

int main (){
	char c;
	 
	 scanf("%c", &c);
	 
	 if(c>=97 && c<=122){
	 	printf("%c\n", c-32);
	 }
	 
	 else
	 printf("%c\n", c);
	 
return 0;
}
