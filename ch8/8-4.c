#include <stdio.h>

int main(){
	
	int premier,second;

	printf("Valeur de 'premier' : ");
	scanf("%d", &premier);
	printf("Valeur de 'second' : ");
	scanf("%d", &second);
	puts("Évaluation en cours...");

	if(premier < second)
	{
		printf("%d est plus petit que %d\n", premier, second);
	}
	if(premier > second)
	{
		printf("%d est plus grand que %d\n", premier, second);
	}
	return(0);
}