#include <stdio.h>
#include <stdlib.h>

int main(void){
	float bruteWage, INSS, IR, sindicate;
	
	printf("Digite o salario bruto: \n");
	scanf("%f", & bruteWage);
	fflush(stdin);
	
	INSS = bruteWage*0.11;
	IR = bruteWage*0.15;
	sindicate = bruteWage*0.03;
	
	float taxes = INSS+IR+sindicate;
	
	float liquidWage = bruteWage-taxes;
	
	printf("O salario liquido, e: %f", liquidWage);
}