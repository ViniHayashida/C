/*Calculo de numeros complexos*/

#include <stdio.h>

void soma (int s_a, int s_bi, int s_c, int s_di)
{
	printf("%d + %di \n", (s_a + s_c),(s_bi + s_di));
}

void mult (int m_a, int m_bi, int m_c, int m_di)
{   
    printf ("%d + %di\n", ((m_a * m_c) - (m_bi * m_di)), ((m_a * m_di) + (m_bi * m_c)));
}

int main () 
{
	int a, b, d, e;
	char c;
	
	scanf("%d %d %c %d %d", &a, &b, &c, &d, &e);
	
	if(c == '+')
	{
		soma(a, b, d, e);
	}
	
	if(c == '*')
	{
		mult(a, b, d, e);	
	}
	
return 0;
}
