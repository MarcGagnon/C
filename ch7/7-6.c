#include <stdio.h>

int main()
{
	int ch;

	printf("Tapez sur entrée : ");
	getchar();
	ch = 72;  // Peut être 72 ou 'H' car putchar() retourne le caractère associé. 72 = 'H'.
	putchar(ch);
	ch = 'i';
	putchar(ch);
	putchar('!');
	putchar('\n');	
	return 0;
}