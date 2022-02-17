#include <stdio.h>

int main(){
	int valorA, valorB, valorC, valorD, diferenca;
	printf("Digite o valor de A:");
	scanf("%d", &valorA);
	printf("Digite o valor de B:");
	scanf("%d", &valorB);
	printf("Digite o valor de C:");
	scanf("%d", &valorC);
	printf("Digite o valor de D:");
	scanf("%d", &valorD);
	diferenca = valorA * valorB - valorC * valorD;
	printf("Diferenca = %d", diferenca);
}