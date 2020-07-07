/*Calendario do ano inserido pelo usuário apos 1582*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Váriaveis globais*/
int G, C, X, Z, E, N, DP; //G(Número Áureo), C(Século), X(Fator de Correção 1), Z(Fator de Correção 2), E(Epacta), N(Lua Cheia), DP(Domingo de Páscoa)
int ano, mes, dia, bis; //bis(bissexto)
int Dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //vetor com ultimo dia de cada mês

/*Protótipos das funções*/
void data_pascoa();
void bissexto();
void pri_janeiro();

int main ()
{
	int m, d, dMes, dSemana, lin, lSeis; //m(mês), d(dias), lin(qtde de linhas que já foram impressas), lSeis(para preencher a sexta llinha do mês)
	char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"}; //ponteiro com nome dos meses
	
	setlocale(LC_ALL, "Portuguese"); //define português para saída com 'ç'
	
	scanf("%d", &ano);
	
	/*Chamada das funções*/
	data_pascoa();
	bissexto();
	pri_janeiro();
							
	/*Imprime calendário*/
	printf("Calendario do ano %d\n", ano);
    printf("|-----------------------------|\n");
	for(m = 0; m < 12; m++) //for para controlar os meses
	{
		dSemana = 0; //sempre começa no domingo	
		
		printf("|%-29s|\n", meses[m]); //printf's para nome dos meses e dos dias da semana
	    printf("|-----------------------------|\n");
	    printf("| dom seg ter qua qui sex sab |\t\n");
	    printf("|");
	    
		lin = 1; //qtde de linhas impressas
	    
	    for(d = 0; d < dia - 1; d++) //for para pular os dias vazios do começo do mês
	    {
	    	printf("  --");
	        dSemana++;	
		}
		
		for(dMes = 1; dMes <= Dias[m]; dMes++) //for para contar  os dias de cada mês
		{
			printf("  %02d", dMes); //printa os dias do mês
			if (dSemana >= 6) //começa nova linha depos de sábado
			{
				printf(" |\n|");
	            dSemana = 0;
	            lin++;		
			}	
			else
			{
				dSemana++;	
			}	
		}
			
		dia = dSemana + 1; //pula para o próximo dia para começar o próximo mês
		
		if(lin == 5) //preenche a quinta linha
		{
			while(dSemana <= 6)
			{
				printf("  --");
		        dSemana++;	
			}
			printf(" |\n|  --  --  --  --  --  --  -- |\n"); //imprime a sexta linha
		}
		else
		{
			if(lin == 6)
			{
				for(lSeis = dia - 1; lSeis <= 6; lSeis++) //preenche a sexta linha
				{
					printf("  --");	
				}
				printf(" |\n");
			}
		}
		printf("|-----------------------------|\n");
	}
		
return 0;	
}

void data_pascoa() 	//Algoritmo para cálculo da data da Páscoa no ano
{
	G = (ano % 19) + 1; //áureo
	
    C = (ano / 100) + 1; //século
    
    X = ((3 * C) / 4) - 12; //fator de correção 1
    
    Z = (((8 * C) + 5) / 25) - 5; //fator de correção 2
    
    E = ((11 * G) + 20 + Z - X) % 30; //epacta
    if((E == 25 && G > 11) || (E == 24)) //verifica o epacta
	{
        E++;
    }

	N = 44 - E; //lua cheia
    if(N < 21)
	{
        N += 30;
    }
    
    DP = ((5 * ano) / 4) - (X + 10); //domingo de páscoa
    
    N = (N + 7) - ((DP + N) % 7); //dia e mês da páscoa
    if(N > 31)
	{
        N = N - 31;
        mes = 4;
    }
    else
	{
        mes = 3;
    }
}

void bissexto() //verifica se o ano é bissexto
{
	if(ano % 100 == 0) 
	{
		ano = ano / 100;
	}
	if(ano % 4 == 0)
	{
		bis = 1;
		Dias[1] = 29;
	}
	else 
	{
		bis = 0;
	}
}

void pri_janeiro() //identifica qual dia da semana cai 1º de Janeiro
{
	if(mes == 4) 
	{
        dia = 8 - ((N + bis + 31 + 28 + 31 ) % 7) ; 
    }
    else 
    {
		if(mes == 3)
		{
        	dia = 8 - ((N + bis + 31 + 28) % 7) ;
    	}
    }	
	if(dia > 6) 
	{
		dia -= 7;
	}
	
	dia++;
}

