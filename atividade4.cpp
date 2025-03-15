#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float fTemp, cTemp;
	
	printf("Digite uma temperatura, em Celsius: ");
	scanf("%f", & cTemp);
	fflush(stdin);
	
	fTemp = cTemp*1.8+32;
	
	printf("Temperatura, e: %f", fTemp);
	
	return 0;
}