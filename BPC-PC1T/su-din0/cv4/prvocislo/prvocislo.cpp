// prvocislo.cpp: Definuje vstupní bod pro aplikaci.
//

#include "prvocislo.h"

int isPrime(int cislo)
{
	if (cislo < 0 || cislo > 100) return -1;


	if ((cislo % 2 == 0 && cislo != 2) || cislo == 1) return 0;
	for (int i = 3; i <= sqrt(cislo); i += 2)
	{
		if (cislo % i == 0) return 0;
	}

	return 1;
}

int main()
{
	int cislo;

	printf("Zadejte cislo v rozsahu 0 az 100: ");
	scanf_s("%d", &cislo);

	switch (isPrime(cislo))
	{
	case 1:
		printf("%d je prvocislo", cislo);
		break;
	case 0:
		printf("%d neni prvocislo", cislo);
		break;
	case -1:
		printf("%d je mimo rozsah 0 - 100", cislo);
		break;
	default:
		break;
	}
}
