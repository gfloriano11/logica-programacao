#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	float radius;
	
	printf("Digite o raio do circulo: \n");
	scanf("%f", & radius);
	fflush(stdin);
	
	float result = M_PI * pow(radius, 2);
	
	printf("O area do circulo, e: \n");
	printf("%f", result);
}