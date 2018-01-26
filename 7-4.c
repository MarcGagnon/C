#include <stdio.h>

main()
{
	int c, d, e;

	printf("Je vais recevoir trois caractères : ");
	c = getchar(); // getchar() (macro) n'a pas besoin de (stdin), getc() (fonction) doit avoir (stdin)
	d = getchar();
	e = getchar();
	printf("J'ai obtenu les caractères '%c', '%c' et '%c'.\n", c, d, e);	
	return(0);
}