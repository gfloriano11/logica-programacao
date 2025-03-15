#include <stdio.h>
#include <stdlib.h>

int main(void){
	float wallWidth, wallHeight;
	float inkCan = 3.6;
	
	printf("Digite a largura da parede: \n");
	scanf("%f", & wallWidth);
	fflush(stdin);
	
	printf("Digite a altura da parede: \n");
	scanf("%f", & wallHeight);
	fflush(stdin);
	
	float wallArea = wallWidth*wallHeight;
	
	float inkQuantity = wallArea*3;
	
	float canQuantity = inkQuantity/inkCan;
	
	printf("A quantidade de latas de tinta, e: %f", canQuantity);
	
}