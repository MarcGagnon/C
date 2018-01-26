#include <stdio.h>

int main()
{
	char prenom[30];
	char nom[30];

	printf("Quel est votre prénom? : ");
	scanf("%s", prenom); // Le formateur %s demande de traiter les données comme une chaine de caractères.
	printf("Et votre nom de famille? : ");
	scanf("%s", nom); // Le formateur %s demande de traiter les données comme une chaine de caractères.
	printf("Ravi de vous rencontrer, %s %s!\n", prenom, nom);
	return 0;
}