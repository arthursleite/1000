#include <stdio.h>
#include <math.h>
int main(){
	double a, b, c, x1, x2;
	printf("Informe o valor de a:");
	scanf ("%lf", &a);
	printf("Informe o valor de b:");
	scanf ("%lf", &b);
	printf("Informe o valor de c:");
	scanf ("%lf", &c);
	x1 = (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
	x2 = (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
	if (a==0 || b==c)
		printf("Impossivel calcular");
	else printf("R1 = %.5lf\nR2 = %.5lf", x1, x2);
}