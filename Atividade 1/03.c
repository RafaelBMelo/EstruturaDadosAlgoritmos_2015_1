//3� Fa�a um Programa que pe�a um n�mero e ent�o mostre a mensagem O n�mero informado foi [n�mero].

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
