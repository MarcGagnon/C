#include <stdio.h>

int main()
{
	char a,b,c,d;
	int i;

	a = 'W';
	b = a + 24; // = o ('A' = 65)
	c = b + 8;  // = w
	d = '\n';
	i = 65;
	printf("%c%c%c%c et A = %c",a,b,c,d,i);
	return(0);
}