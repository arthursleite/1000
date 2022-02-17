#include <stdio.h>

int main(){
	int numFuncionario, numHoras;
	float valorHoras, salario;
	//printf("Digite seu numero, o numero de horas que trabalha, e o valor que recebe por hora.\n");
	//scanf("%d, %d, %f", numFuncionario, &numHoras, &salario);
	//printf("%d, %d, %f", &numFuncionario, &numHoras, &salario);
	printf("Digite seu numero:");
	scanf("%d", &numFuncionario);
	printf("Digite o numero de horas que trabalha:");
	scanf("%d",&numHoras);
	printf("Digite o valor que recebe por hora:");
	scanf("%f", &valorHoras);
	salario = valorHoras * numHoras;
	printf("numero = %d\nsalario = R$ %.2f", numFuncionario, salario);
}