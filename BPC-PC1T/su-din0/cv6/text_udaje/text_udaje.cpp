// text_udaje.cpp: Definuje vstupní bod pro aplikaci.
//

#include "text_udaje.h"
#include "ctype.h"

int pocetPismen(char* text)
{
	int pocet = 0;
	for (int i = 0; i < strlen(text); i++)
	{
		if (isalpha(text[i])) {
			++pocet;
		}
	}

	return pocet;
}

int pocetCislic(char* text)
{
	int pocet = 0;
	for (int i = 0; i < strlen(text); i++)
	{
		if (isdigit(text[i])) ++pocet;
	}

	return pocet;
}

int DelkySlov(char* text, int* delky)
{
	int pocet = 0;
	int pocetSlov = 0;
	for (int i = 0; i < strlen(text); i++)
	{
		if ((!isspace(text[i]) && !ispunct(text[i])) && isalpha(text[i])) ++pocet;
		else if (pocet > 0) {
			if (pocetSlov <= 99)
			{
				delky[pocetSlov] = pocet;
				pocet = 0;
			}
			pocetSlov++;
		}
	}

	return pocetSlov;
}

int main()
{
	char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi.Auto Hyundai ix35 ma pres 120 konskych sil.";

	printf("Text obsahuje celkem %d pismen\n", pocetPismen(text));
	printf("Text obsahuje celkem %d cislic\n", pocetCislic(text));

	int JednotliveDelky[100];

	int pocetSlov = DelkySlov(text, JednotliveDelky);

	printf("Text obsahuje celkem %d slov\n", pocetSlov);

	printf("Delky slov: ");
	for (int i = 0; i < pocetSlov; i++)
	{
		if (i > 99) break;

		printf("%d", JednotliveDelky[i]);
		if (i < pocetSlov - 1) {
			printf(", ");
		}

	}
}
