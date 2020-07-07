/*Código que calcula média do aluno e diz se ele foi aprovado ou reprovado*/

#include <stdio.h>

int main (){
	float p1, p2, p3, media, exame;
	
	 scanf("%f %f %f", &p1, &p2, &p3);
	 
	 if(p1>=6.0 && p2>=6.0 && p3>=6.0){
	 	media = (p1+p2+p3)/3;
	 	printf("media: %.1f\n", media);
	 	printf("APROVADO\n");
	 }
	
	 if(p1<2.0 || p2<2.0 || p3<2.0){
	 	media = (p1+p2+p3)/3;
	 	printf("media: %.1f\n", media);
	 	printf("REPROVADO\n");
	 }
	 
	 else
	 media = (p1+p2+p3)/3;
	 //printf("Nota do Exame:");
	 scanf("%f", &exame);
	 
	 if((media+exame)/2 >= 5){
		printf("APROVADO\n");
	 }
	 
	 else
	 printf("REPROVADO\n");
		 
return 0;
}
