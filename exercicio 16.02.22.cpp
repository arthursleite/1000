#include <stdio.h>

int main(){ //esse inicio nao muda, sempre int main(){}
	double valorA, valorB, soma, produto, diferenca, quociente;
	printf("Insira o valor de A:");
	scanf("%lf", &valorA);
	printf("Insira o valor de B:");
	scanf("%lf", &valorB);
	
	soma = valorA + valorB;
	produto = valorA * valorB;
	diferenca = valorA - valorB;
	quociente = valorA / valorB;
	
	printf("%.3lf + %.3lf = %.3lf\n", valorA, valorB, soma);
	printf("%lf x %lf = %lf\n", valorA, valorB, produto);
	printf("%lf - %lf = %lf\n", valorA, valorB, diferenca);
	printf("%lf / %lf = %lf\n", valorA, valorB, quociente);
	// para usar uma so variavel, tem que colocar formula e na linha seguinte o printf
	// e possivel calcular direto no printf > printf("", a + b);
}
