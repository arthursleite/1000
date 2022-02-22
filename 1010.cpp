#include <stdio.h>
int main(){
	int c1, n1, c2, n2;
	double v1, v2, vf;
	printf("Insira o codigo da peca, o numero de pecas, e o valor unitario de cada peca, separados por um espaco: ");
	scanf("%d %d %lf", &c1, &n1, &v1);
	printf("Insira o codigo da peca, o numero de pecas, e o valor unitario de cada peca, separados por um espaco: ");
	scanf("%d %d %lf", &c2, &n2, &v2);
	vf = (v1*n1) + (v2*n2);
	printf("Valor a pagar: %.2lf", vf);
}