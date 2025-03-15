#include <stdio.h>
#include <stdlib.h>

int main(void){
	int valuePerDay, workedDays;
	float discount;
	
	valuePerDay = 25;
	discount = 0.08;
	
	printf("Insira o numero de dias trabalhados: \n");
	scanf("%i", & workedDays);
	fflush(stdin);
	
	float bruteWage = (valuePerDay*workedDays);
	
	float liquidWage = bruteWage-(bruteWage*discount);

	printf("Seu salario liquido, e: \n %f", liquidWage);
}