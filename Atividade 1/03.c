//3­ Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].

#include <stdio.h>

int mostra_numero(int Num)
{
	printf("Digite um numero:\n");
	scanf("%d", &Num);
	return (Num);	
}

int main()
{
	int N;
	printf("O numero informado foi %d.\n", 	mostra_numero(N));
return 0;
}
