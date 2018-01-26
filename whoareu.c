#include <stdio.h>

int main(int argc, char const *argv[])
{
	char nom[20];
	char ami[20];

	printf("Quel est votre nom?\n");
	scanf("%s", &nom);
	printf("Quel est le nom de votre ami(e)?\n");
	scanf("%s", &ami);

	printf("Bonjour, %s et %s!\n", nom, ami);
	return 0;
}