//16� Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber, sabendo�se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% sobre este sal�rio.

#include <stdio.h>

float Salario_aum_imp(float S)
{	
    float gratificacao, total;
    
	gratificacao = S + S*5/100;
	printf("%.2f\n", gratificacao);
	total = gratificacao - gratificacao*7/100;
    printf("%.2f\n", total);
	return(total);
}

int main()
{
	float salario, salario_total;
	
	scanf("%f", &salario);
    salario_total = Salario_aum_imp(salario);
    printf("O salario a receber corresponde a R$ %.2f reais.\n", salario_total);
return 0;
}
