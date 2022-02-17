#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){
	double raio, area;
	printf("Insira o valor do raio:");
	scanf("%lf", &raio);
	area = PI * pow(raio,2);
	printf("Area = %.4lf", area);
}