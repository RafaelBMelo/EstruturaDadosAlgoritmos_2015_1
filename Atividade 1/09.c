//9� Fa�a um Programa que leia o tamanho de um lado do quadrado e calcule sua �rea em seguida mostre o dobro desta �rea para o usu�rio.

#include <stdio.h>

int Dobro_Area(int L)
{	
	int area, dobro;
	
	area = L*L;
	dobro = 2*area;
	return(dobro);
}

int main()
{
	int Lado;
	
	scanf("%d", &Lado);
    printf("O dobro da area do quadrado de lado %d corresponde a %d.\n", Lado, Dobro_Area(Lado));
return 0;
}
