#include <stdio.h>
#include <stdlib.h>

int main(void){
	float gradeOne, gradeTwo, gradeThree, gradeFour;
	
	printf("Digite o valor do primeira nota: \n");
	scanf("%f", & gradeOne);
	fflush(stdin);
	
	printf("Digite o valor da segunda nota: \n");
	scanf("%f", & gradeTwo);
	fflush(stdin);
	
	printf("Digite o valor da terceira nota: \n");
	scanf("%f", & gradeThree);
	fflush(stdin);
	
	printf("Digite o valor da quarta nota: \n");
	scanf("%f", & gradeFour);
	fflush(stdin);
	
	float avg_grade = (gradeOne+gradeTwo+gradeThree+gradeFour)/4;
	
	printf("A media da nota, e: %f", avg_grade);
}