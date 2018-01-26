#include <stdio.h>

int main()
{
	char nom[40];

	printf("Quel est votre nom complet? : ");
	fgets(nom, 40, stdin);
	printf("Bonjour, %s", nom);
	return 0;
}