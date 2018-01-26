#include <stdio.h>

int main()
{
	// Même exercice que 7-13, mais en utilisant fgets() au lieu de scanf().

	char prenom[30];
	char nom[30];

	printf("Quel est votre prénom? : ");
	fgets(prenom, 30, stdin);
	printf("Et votre nom de famille? : ");
	fgets(nom, 30, stdin);
	printf("Ravi de vous rencontrer, %s %s!\n", prenom, nom);
	return 0;
	// Sauf que la fonction fgets() semble inclure un \n automatiquement. Est-ce propre au compilateur utilisé?
}