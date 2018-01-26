#include <stdio.h>

int main()
{
	float fav;

	printf("Quel est votre chiffre favori? : ");
	scanf("%f", &fav); // Avec scanf(), le & est toujours requis pour affecter une valeur à une variable,
	// SAUF s'il s'agit d'une chaine de caractère à affecter à une variable tableau.
	printf("Personnellement, je préfère le chiffre %f!\n", fav + 3);
	return 0;
}