#include <stdio.h>

int main()
{
	char prompt[] = "Frappez \'Entrée\' pour exploser :";

	printf("%s\n", prompt);
	getchar(); // Attend la touche 'Entrée'
	return 0;
}