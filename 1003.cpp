#include <stdio.h>

int main(){
	int valorA, valorB, soma;
	printf("Insira o valor de A:");
	scanf("%d",&valorA);
	printf("Insira o valor de B:");
	scanf("%d",&valorB);
	soma = valorA + valorB;
	printf("%d + %d = %d", valorA, valorB, soma);
}