/*5. Fa�a um programa que receba tr�s n�meros obrigatoriamente em ordem crescente e um quarto
n�mero que n�o siga essa regra. Mostre, em seguida, os quatro n�meros em ordem decrescente. 
Suponha que o usu�rio digitar� quatro n�meros diferentes.*/

#include<stdio.h>
#include<stdlib.h>

int decresc(int N1, int N2, int N3){
	int N4;
	
	scanf("%d", &N4);
    if(N4<N1)
       printf("%d %d %d %d", N3, N2, N1, N4);
    else if (N4>N1 && N4<N2)
       printf("%d %d %d %d", N3, N2, N4, N1);
    else if (N4>N2 && N4<N3)
       printf("%d %d %d %d", N3, N4, N2, N1);
    else
       printf("%d %d %d% d", N4, N3, N2, N1);
}
       
int main()
{
	int Num1, Num2, Num3;
	
	scanf("%d %d %d", &Num1, &Num2, &Num3);
	decresc(Num1, Num2, Num3);
return 0;
}
