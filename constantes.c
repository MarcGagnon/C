#include <stdio.h>

#define VALEUR 8 // Déclaration d'une constante numérique
#define AUTEUR "Pierre Jean Jacques" // Déclaration d'une constante texte

int main(int argc, char const *argv[])
{
	printf("La valeur de la constante est %d.\n", VALEUR);
	printf("Une opération arithmétique sur une constante : VALEUR X 3 = %d.\n", VALEUR * 3);
	printf("L'auteur de ce programme est %s.\n", AUTEUR);
	return 0;
}