#include <stdio.h>

main()
{
	int c;

	printf("Je vais recevoir un caractère : ");
	c = getchar();
	printf("J'ai obtenu le caractère '%c'.\n", c);	
	return(0);
}