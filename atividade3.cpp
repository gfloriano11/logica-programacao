#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float fTemp, cTemp;
	
	printf("Digite uma temperatura, em Fahrenheit: ");
	scanf("%f", & fTemp);
	fflush(stdin);
	
	cTemp = (5*(fTemp-32)/9);
	
	printf("Temperatura, e: %f", cTemp);
	
	return 0;
}