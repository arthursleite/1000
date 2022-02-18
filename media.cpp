#include <stdio.h>
#define P1 3.5
#define P2 7.5
int main(){
	double n1, n2, media;
	printf("Usuario, digite a primeira nota:");
	scanf("%lf",&n1);
	printf("Usuario, digite a segunda nota:");
	scanf("%lf",&n2);
	media = (n1*P1 + n2*P2)/11;
	printf ("Sua media e de: %lf", media);
}
