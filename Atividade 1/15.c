//15� Fa�a um programa que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre o valor do aumento e o novo sal�rio.

#include <stdio.h>

int Salario_aum(float S, float P_Aum)
{	
	scanf("%f %f", &S, &P_Aum);	
	printf("O aumento no salario foi de R$ %.2f reais ficando com um salario total de R$ %.2f reais.\n", S*P_Aum/100, (S + S*P_Aum/100));
}

int main()
{
	float salario, perc_aumento;
	
    Salario_aum(salario, perc_aumento);
return 0;
}
