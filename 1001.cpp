#include <stdio.h>

int main(){
	float a, b, x; 	//int para inteiros, float para decimais
	printf("Digite o valor de a:");
	scanf("%f", &a); 	//%f para float, %d para int, etc.
	printf("Digite o valor de b:");
	scanf("%f", &b);
	x = a + b;
	printf("X = %f", x); 	//%.1f para 1 casa decimal(arredondando), %.2f para 2 casas, etc; o %f pode ir em qualquer lugar da frase ("o valor %f está certo?").
}
	
