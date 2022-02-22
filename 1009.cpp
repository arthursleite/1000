#include <stdio.h>
int main(){
	char nome [20];
	double salarioFixo, vendas, salarioFinal;
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite seu salario: ");
	scanf("%lf", &salarioFixo);
	printf("Digite o valor total das vendas: ");
	scanf("%lf", &vendas);
	salarioFinal = salarioFixo + (vendas * 15)/100;
	printf("Total = R$ %.2lf", salarioFinal);
}