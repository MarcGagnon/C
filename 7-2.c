#include <stdio.h>

main()
{
	int c;

	printf("Je vais recevoir un caractère : ");
	c = getchar();
	printf("J'ai obtenu le caractère '%d'.\n", c);	
	return(0);
}