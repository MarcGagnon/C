#include <stdio.h>

#define LONGUEUR 3

int main()
{
	char nom[LONGUEUR]; // La longueur du tableau = valeur de la constante LONGUEUR (3), donc 2 caractères + \0.

	printf("Quel est votre nom complet? : ");
	fgets(nom, LONGUEUR, stdin);
	printf("Bonjour, %s", nom);
	return 0;
}