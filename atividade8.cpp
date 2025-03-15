#include <stdio.h>
#include <stdlib.h>

int main(void){
	float numberOne, numberTwo;
	
	printf("Digite o valor do primeiro numero: \n");
	scanf("%f", & numberOne);
	fflush(stdin);
	
	printf("Digite o valor do segundo numero: \n");
	scanf("%f", & numberTwo);
	fflush(stdin);
	
	float result = numberOne+numberTwo;
	
	printf("A soma, e: %f", result);
}