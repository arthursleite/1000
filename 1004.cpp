#include <stdio.h>

int main(){
	int valorA, valorB, prod;
	printf("Insira o valor de A:");
	scanf("%d",&valorA);
	printf("Insira o valor de B:");
	scanf("%d", &valorB);
	prod = valorA * valorB;
	printf("%d x %d = %d", valorA, valorB, prod);
}