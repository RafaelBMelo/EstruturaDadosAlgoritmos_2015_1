//10� Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.

#include <stdio.h>

float Salario(float V_H, float N_H)
{	
	printf("Quanto voce ganha por hora?\n");
	scanf("%f", &V_H);
	printf("Voce trabalhou quantas horas neste mes?\n");
	scanf("%f", &N_H);	
	printf("O seu salario neste mes corresponde a R$ %.2f reais.\n", V_H*N_H);
}

int main()
{
	float valor_horas, num_horas;
	
    Salario(valor_horas, num_horas);
return 0;
}
