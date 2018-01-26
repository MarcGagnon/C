#include <stdio.h>

int main()
{
	char a,b,c,d;
	int i;

	a = 'W';
	// b = a + 24; // = o ('A' = 65)
	b = 'o'; // atttribue une valeur directement à partir d'un caractère délimité par des apostrophes.
	// c = b + 8;  // = w
	c = 'w'; // atttribue une valeur directement à partir d'un caractère délimité par des apostrophes.
	d = '\n';
	// i = 65;
	i = 'A'; // atttribue une valeur directement à partir d'un caractère délimité par des apostrophes.
	printf("%c%c%c%c et A = %c",a,b,c,d,i);
	return(0);
}