// prestupny-rok.cpp: Definuje vstupní bod pro aplikaci.
//

#include "prestupny-rok.h"

int jePrestupny(int rok)
{
	if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0) return 1;
	else return 0;
}

int main()
{
	printf("1000\t %d", jePrestupny(1000));
	printf("\n2000\t %d", jePrestupny(2000));
	printf("\n2002\t %d", jePrestupny(2002));
	printf("\n2012\t %d", jePrestupny(2012));
	printf("\n2022\t %d", jePrestupny(2022));
	printf("\n2200\t %d", jePrestupny(2200));
	
	return 0;
}
