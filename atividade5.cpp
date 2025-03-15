#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	float floatNumber;
	int intOne, intTwo;
	
	printf("Digite um numero decimal: \n");
	scanf("%f", & floatNumber);
	fflush(stdin);
	
	printf("Digite o primeiro numero inteiro: \n");
	scanf("%i", & intOne);
	fflush(stdin);
	
	printf("Digite o segundo numero inteiro: \n");
	scanf("%i", & intTwo);
	fflush(stdin);
	
	float resultOne = (intOne*2)*((float)intTwo/2);
	
	float resultTwo = (3*intOne)+floatNumber;
	
	float resultThree = pow(floatNumber, 3);
	
	printf("O produto do dobro do primeiro, com metade do segundo, e: \n");
	printf("%f \n", resultOne);
	
	printf("A soma do triplo do primeiro com o terceiro: \n");
	printf("%f \n", resultTwo);
	
	printf("O terceiro elevado ao cubo: \n");
	printf("%f \n", resultThree);
}