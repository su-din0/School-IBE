// soucet_velikost_soucin.cpp: Definuje vstupní bod pro aplikaci.
//

#include "soucet_velikost_soucin.h"
#include "vektorovySoucin.h"
#include "cmath"

void soucet(double a[3], double b[3], double c[3])
{
	for (int i = 0; i < 3; i++)
	{
		c[i] = a[i] + b[i];
	}
}

double velikost(double a[3])
{
	return sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
}

double skalarniSoucin(double a[3], double b[3])
{

	return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}
int main()
{
	double a[3], b[3], c[3];
	printf_s("Vektor A (3 hodnoty oddelene carkou): ");
	scanf_s("%lf,%lf,%lf", &a[0], &a[1], &a[2]);

	printf_s("Vektor B (3 hodnoty oddelene carkou): ");
	scanf_s("%lf,%lf,%lf", &b[0], &b[1], &b[2]);

	soucet(a, b, c);
	printf_s("Soucet A + B: (%f, %f, %f)", c[0], c[1], c[2]);

	printf_s("\nVelikost A: %f", velikost(a));

	printf_s("\nSkalarni soucin AB: %f", skalarniSoucin(a, b));

	//Jiny soubor
	vektorovySoucin(a, b, c);
	printf_s("\nVektorovy soucin (%f, %f, %f)", c[0], c[1], c[2]);
}
