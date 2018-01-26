#include <stdio.h>

int main()
{
	char prenom[30];

	printf("Quel est votre prénom? : ");
	scanf("%s", prenom); // Le formateur %s demande de traiter les données comme une chaine de caractères.
	printf("Ravi de vous rencontrer, %s!\n", prenom);
	return 0;
}