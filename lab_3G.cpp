

#include "pch.h"
#include <stdio.h>
#include <math.h>
#include <windows.h>
#define pi 3.141592653589

float SquareCircle(float, float);
float SquareQuad(float, float);
int main() //вычисление площади сектора, лежащего между кругом и квадратом, описанным вокруг этого круга 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float r = 0;
	float scirc = 0;
	float squad = 0;
	printf("Введите радиус круга: ");
	scanf("%f", &r);
	scirc = SquareCircle(scirc, r);
	squad = SquareQuad(r, squad);
	float sector = squad - scirc;
	printf("\nПлощадь круга                                      | %.2f", scirc);
	printf("\nПлощадь квадрата, описанного около круга           | %.2f", squad);
	printf("\nПлощадь сектора, лежащего между кругом и квадратом | %.2f", sector);
	getchar();
	return 0;
}
float SquareCircle(float scirc, float r)
{
	scirc = pi * pow(r, 2);
	return scirc;
}
float SquareQuad(float r, float squad)
{
	squad = pow(2 * r, 2);
	return squad;
}
