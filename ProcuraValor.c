/*Procura valores no vetor inserido pelo usuario*/

#include <stdio.h>

int main() {
	float notas[20], x;
	int i;
	
	for(i=0; i<20; i++){
		scanf("%f", &notas[i]);
	}
	
	while((x>=0)){
		scanf("%f", &x);
		if(x<0)break;
		i=0;
		while((notas[i] != x) && (i<20))
			i++;
			if(i<20){
				printf("existe\n");
			}
			else{
				printf("nao existe\n");
			}
	}

return 0;
}
