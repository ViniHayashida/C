/*Calculo da combinação de dois numeros*/

#include <stdio.h>

int main() {
	int n, resp_n, s, resp_s, t , resp_t, resp_final;
	
	scanf("%d", &n);
	scanf("%d", &s);
	
	t = n-s;
	for(resp_t=1; t>1; t--){
		resp_t *= t;
	}
	//printf("%d\n", resp_t);
	
	for(resp_n = 1; n>1; n--){
		resp_n *= n;
	}
	//printf("%d\n", resp_n);
	
	for(resp_s=1; s>1; s--){
		resp_s *= s;
	}
	//printf("%d\n", resp_s);
	
	printf("\n");
	
	resp_final = resp_n / (resp_t*resp_s);
	
	printf("%d\n", resp_final);

return 0;
}
