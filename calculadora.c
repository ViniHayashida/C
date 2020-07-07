/*Calculadora simples*/

#include <stdio.h>

int main () {
	float num1, num2, res;
	char op;
	
	scanf("%f%c%f", &num1, &op, &num2);
		
		if(op=='+'){
			res = num1+num2;
			printf("%.3f+%.3f=%.3f",num1, num2, res);
		}
		else
	
		if(op=='-'){
			res = num1-num2;
			printf("%.3f-%.3f=%.3f",num1, num2, res);
		}
		else
	
		if(op=='*'){
			res = num1*num2;
			printf("%.3f*%.3f=%.3f",num1, num2, res);
		}
		else
	
		if(op=='/'){
			res = num1/num2;
			printf("%.3f/%.3f=%.3f",num1, num2, res);
		}
		else
		
		printf("Operador invalido\n");
	
return 0;
}
