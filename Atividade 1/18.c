//18 �Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Supondo que: �rea = (base *altura) / 2.

#include <stdio.h>

int area_triangulo(int b, int h)
{	
    int AREA;
    
	AREA = (b*h)/2;
	return(AREA);
}

int main()
{
	int base, altura, area;
	
	scanf("%d %d", &base, &altura);
    area = area_triangulo(base, altura);
    printf("A area do triangulo corresponde a %d u.a.\n", area);
return 0;
}
