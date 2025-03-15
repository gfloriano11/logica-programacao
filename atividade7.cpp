#include <stdio.h>
#include <stdlib.h>

int main(void){
	float m, cm;
	
	printf("Digite a distancia em m: \n");
	scanf("%f", & m);
	fflush(stdin);
	
	cm = (m*100);
	
	printf("%fm em cm, e %f", m, cm);
}