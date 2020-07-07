/*Corretor de provas de multipla escolha com ate 20 questoes*/

#include<stdio.h>

int main () {
	int nq=1, nlin, a, b, c, d, e, cont=0; //nq(numero de questoes), nlin(numero de linhas), abcde(resposta), cont(var pra saber alternativa marcada)
	
	while(nq != 0 && nq <= 20 && nq >= 1){ //encerra programa caso nq=0
	
		scanf("%d", &nq);
		if(nq <= 20 && nq >= 0){ //if para verificar se o numero de questoes está no limite
			for(nlin=1; nlin <= nq; nlin++){ //for para contar numero de linhas
				scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
				if(a <= 127){ //if's para verficcar qual alternativa foi marcada
					cont = cont + 1;
				}
				if(b <= 127){
					cont = cont + 2;
				}
				if(c <= 127){
					cont = cont + 3;
				}
				if(d <= 127){
					cont = cont + 4;
				}
				if(e <= 127){
					cont = cont + 5;
				}
				if(cont == 15 || cont > 5 || cont == 0){ //if para caso mais de uma alternativa foi marcada
					printf("*\n");
				}
				if(cont == 1){ //if's para printar a resposta marcada
					printf("A\n");
				}
				if(cont == 2){
					printf("B\n");
				}
				if(cont == 3){
					printf("C\n");
				}
				if(cont == 4){
					printf("D\n");
				}
				if(cont == 5){
					printf("E\n");
				}
				cont = 0;
			}
		}
		else{
			printf("Numero de questoes fora dos limites permitidos!\n");
		}
	}
return 0;
}
