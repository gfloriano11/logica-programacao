#include <stdio.h>
#include <stdlib.h>

int main(void){
	int machineQuantity;
	
	printf("Quantas maquinas serao adquiridas? \n");
	scanf("%i", & machineQuantity);
	
	int expensiveQuantity = machineQuantity;
	int cheapQuantity = 2*machineQuantity;
	int mediumQuantity = 3*machineQuantity;
	
	int expensiveMotor = machineQuantity*1500;
	int cheapMotor = cheapQuantity*300;
	int mediumMotor = mediumQuantity*600;
	
	printf("-------------------------------------------------------------------\n");
	printf("|     Motor 20 CV     |     Motor 5 CV      |     Motor 1 CV      |\n");
	printf("|                     |                     |                     |\n");
	printf("|     Quantidade:     |     Quantidade:     |     Quantidade:     |\n");
	printf("|      %i motores             %i motores             %i motores    \n", expensiveQuantity, mediumQuantity, cheapQuantity);
	printf("|                     |                     |                     |\n");
	printf("|        Preco        |        Preco        |        Preco        |\n");
	printf("|      %i Reais           %i Reais              %i Reais           \n", expensiveMotor, mediumMotor, cheapMotor);
	printf("|                     |                     |                     |\n");
	printf("-------------------------------------------------------------------\n");
}