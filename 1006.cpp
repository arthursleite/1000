#include <stdio.h>
#define P1 2
#define P2 3
#define P3 5

int main(){
	double valorA, valorB, valorC, media;
	printf("Insira o valor de A:");
	scanf("%lf", &valorA);
	printf("Insira o valor de B:");
	scanf("%lf", &valorB);
	printf("Insira o valor de C:");
	scanf("%lf", &valorC);
	media = (valorA * P1 + valorB * P2 + valorC * P3)/10;
	printf("Media =  %.1lf", media);
}