#include <stdio.h>
#include <stdlib.h>

int main(void){
	char nome[255], rua[255], bairro[255], cidade[255], telefone[15], email[255], cpf[15], rg[15], dia[15], mes[15], ano[15];
	int idade;
	float valor_bancario;
	
	printf("Digite seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	
	printf("Digite sua rua: ");
	fgets(rua, sizeof(rua), stdin);
	
	printf("Digite seu bairro: ");
	fgets(bairro, sizeof(bairro), stdin);
	
	printf("Digite sua cidade: ");
	fgets(cidade, sizeof(cidade), stdin);
	
	printf("Digite seu numero de telefone: ");
	fgets(telefone, sizeof(telefone), stdin);
	
	printf("Digite seu e-mail: ");
	fgets(email, sizeof(email), stdin);
	
	printf("Digite seu CPF: ");
	fgets(cpf, sizeof(cpf), stdin);
	
	printf("Digite seu RG: ");
	fgets(rg, sizeof(rg), stdin);
	
	printf("Digite o dia do seu nascimento: ");
	scanf("%s", dia);
	fflush(stdin);
	
	printf("Digite o mes do seu nascimento: ");
	scanf("%s", mes);
	fflush(stdin);
	
	printf("Digite o ano do seu nascimento: ");
	scanf("%s", ano);
	fflush(stdin);
	
	printf("Seus dados, sao: \n");
	printf("Nome: %s\n", nome);
	printf("Rua: %s\n", rua);
	printf("Bairro: %s\n", bairro);
	printf("Cidade: %s\n", cidade);
	printf("Numero de Telefone: %s\n", telefone);
	printf("Email: %s\n", email);
	printf("CPF: %s\n", cpf);
	printf("RG: %s\n", rg);
	printf("Data de Nascimento: %s/%s/%s\n", dia, mes, ano);
	
	return 0;
}