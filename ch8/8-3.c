#include <stdio.h>

int main(){
	
	int a,b;

	a = 6;
	b = a - 2;

	if(a > b)
		printf("%d est plus grand que %d\n", a,b); // La première ligne s'imprime, même s'il n'y a pas d'accolades.
		printf("Cette phrase s'imprime après la condition, qu'elle soit rencontrée ou non.\n");	
	return(0);
}