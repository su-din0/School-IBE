// obvod-obsah-ctverec.cpp: Definuje vstupní bod pro aplikaci.
//

#include "obvod-obsah-ctverec.h"

int main()
{
	int a1, a2;

	printf("Zadejte stranu a prvniho ctverce: ");
	scanf_s("%d", &a1);

	printf("Zadejte stranu a druheho ctverce: ");
	scanf_s("%d", &a2);

	int obsah1 = a1 * a1;
	int obvod1 = 4 * a1;

	int obsah2 = a2 * a2;
	int obvod2 = 4 * a2;

	printf("\t\tObsah\tObvod");
	printf("\nCtverec - 1\t%d cm\t%d cm", obsah1, obvod1);
	printf("\nCtverec - 2\t%d cm\t%d cm", obsah2, obvod2);

	return 0;
}
