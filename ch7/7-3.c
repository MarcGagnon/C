#include <stdio.h>

main()
{
	int c;

	printf("Je vais recevoir un caractère : ");
	// c = getc(); // va gérérer une erreur, car la fonction getc() a besoin du paramètre (stdin) ?
	c = getc(stdin); // getc est la VRAI fonction qu'utilise la macro getchar() utilisée en 7-1 et 7-2
	printf("J'ai obtenu le caractère '%d'.\n", c);	
	return(0);
}