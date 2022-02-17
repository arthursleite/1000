#include <stdio.h>

int main(){
	double valorA, valorB, media;
	printf("Insira o valor de A:");
	scanf("%lf", &valorA);
	printf("Insira o valor de B:");
	scanf("%lf", &valorB);
	media = (valorA * 3.5 + valorB * 7.5)/11;
	printf("Media =  %.5lf", media);
}