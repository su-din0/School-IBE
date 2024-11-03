#include "cmath"
#include "iostream"
#include "Body2d.h"

int indexNejblizsi(int velikost, int(*poleBodu)[2], int referencniX, int referencniY)
{
	double nejblizsi = sqrt(pow(referencniX - poleBodu[0][0], 2) + pow(referencniY - poleBodu[0][1], 2));
	int index = 0;

	for (int i = 1; i < velikost; i++)
	{
		double vzdalenost = sqrt(pow(referencniX - poleBodu[i][0], 2) + pow(referencniY - poleBodu[i][1], 2));
		if (vzdalenost < nejblizsi)
		{
			nejblizsi = vzdalenost;
			index = i;
		}
	}

	return index;
}


double prumernaVzdalenost(int velikost, int(*poleBodu)[2], int referencniX, int referencniY)
{
	double soucet = 0;
	for (int i = 0; i < velikost; i++)
	{
		double vzdalenost = sqrt(pow(referencniX - poleBodu[i][0], 2) + pow(referencniY - poleBodu[i][1], 2));

		soucet += vzdalenost;
	}

	return (double)(soucet / velikost);
}

int bodyVKvadrantu(int velikost, int(*poleBodu)[2], int referencniX, int referencniY, int kvadrant)
{
	int pocet = 0;
	bool lezi = false;

	for (int i = 0; i < velikost; i++)
	{
		int x = poleBodu[i][0] - referencniX;
		int y = poleBodu[i][1] - referencniY;

		switch (kvadrant)
		{
		case 1:
			lezi = (x > 0 && y > 0);
			break;
		case 2:
			lezi = (x < 0 && y > 0);
			break;
		case 3:
			lezi = (x < 0 && y < 0);
			break;
		case 4:
			lezi = (x > 0 && y < 0);
			break;
		default:
			lezi = false;
			break;
		}

		if (lezi)
		{
			++pocet;
			printf_s("[%d;%d]", poleBodu[i][0], poleBodu[i][1]);
		}

		lezi = false;
	}

	return pocet;
}