#include <stdio.h>

int main()
{
	char prompt[] = "Programme pour exploser le Monde\nFrappez \'Entrée\' pour exploser :";
    // En C, le seul moment pour affecter une valeur de chaine à un tableau est au moment de sa déclaration.
    // Pour en modifier la valeur plus tard, il faut modifier le tableau avec les fonctions de chaines et les pointeurs.

	printf("%s\n", prompt);
	getchar(); // Attend la touche 'Entrée'
	return 0;
}