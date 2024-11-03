// blesk-hrom.cpp: Definuje vstupní bod pro aplikaci.
//

#include "blesk-hrom.h"

using namespace std;

int main()
{
	int sekundy;
	int rychlostZvuku = 340;
	int vzdalenost;

	printf("Zadej pred jakou dobou uhodil blesk (V sekundach):");
	scanf_s("%d", &sekundy);

	vzdalenost = sekundy * rychlostZvuku;

	printf("\nBlesk uhodil %d metru od vas", vzdalenost);

	return 0;
}
