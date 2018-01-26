#include <stdio.h>

int main () 
{
	printf("Addition       : 1 + 1 = %i\n", 1+1);
	printf("Soustraction   : 1 - 1 = %i\n", 1 - 1);
	printf("Multiplication : 2 * 3 = %i\n", 2 * 3);
	printf("Division       : 5 / 2 = %f\n", 5./2); // float et point requis
	printf("Modulo         : 14 / 3 = %i\n", 14%3);  // le « reste » après une division
	printf("Apprendre le langage %s, pas à pas.", "C");
	return 0;
}