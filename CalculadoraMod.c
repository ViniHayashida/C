/*Calculadora simples utilizando a modularizacao de programas*/

#include <stdio.h>
#include <math.h>

float soma (char op, float num1, float num2);

float sub (char op, float num1, float num2);

float mult (char op, float num1, float num2);

float div (char op, float num1, float num2);

float pot (char op, float num1, float num2);

int main () 
{
	char op;
	float num1, num2; 
	
	scanf("%f%c%f", &num1, &op, &num2);
	
	if(op == '+')
	{
		printf("%.3f \n", soma(op, num1, num2));
	}
	if(op == '-')
	{
		printf("%.3f \n", sub(op, num1, num2));	
	}
	if(op == '*')
	{
		printf("%.3f \n", mult(op, num1, num2));
	}
	if(op == '/')
	{
		printf("%.3f \n", div(op, num1, num2));
	}
	if(op == '^')
	{
		printf("%.3f \n", pot(op, num1, num2));
	}
	
	else
	{
		return 0;
    }
		
return 0;
}

float soma (char op, float num1, float num2)
{
	return (num1 + num2);
}

float sub (char op, float num1, float num2)
{
	return (num1 - num2);
}

float mult (char op, float num1, float num2)
{
	return (num1 * num2);
}

float div (char op, float num1, float num2)
{
	return (num1 / num2);

}

float pot (char op, float num1, float num2)
{
	return (pow(num1, num2));
}
