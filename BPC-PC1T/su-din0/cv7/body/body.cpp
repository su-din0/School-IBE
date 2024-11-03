// body.cpp: Definuje vstupní bod pro aplikaci.
//

#include "body.h"
#include "Body2d.h"
#define POCET_BODU 10

int main()
{
	int body[POCET_BODU][2] =
	{
		5, 10,
		-14, 2,
		45, 4,
		-9, 8,
		58, -3,
		47, 5,
		-18, -86,
		75, 7,
		-25, 51,
		17, 98
	};

	int souradniceX, souradniceY, kvadrant;

	printf_s("Zadej sourednici x: ");
	scanf_s("%d", &souradniceX);

	printf_s("Zadej sourednici y: ");
	scanf_s("%d", &souradniceY);

	int index = indexNejblizsi(POCET_BODU, body, souradniceX, souradniceY);
	double prumer = prumernaVzdalenost(POCET_BODU, body, souradniceX, souradniceY);



	printf_s("Nejblizsi je [%d;%d]", body[index][0], body[index][1]);
	printf_s("\nPrumerna vzdalenost je %f", prumer);

	printf("\nZadej kvadrant: ");
	scanf_s("%d", &kvadrant);
 
	int pocetKvadrantu = bodyVKvadrantu(POCET_BODU, body, souradniceX, souradniceY, kvadrant);
	printf("\n\nPocet bodu v kvadrantu je %d", pocetKvadrantu);

}
