#include <stdio.h>

int main(){
	
	int a,b;

	a = 6;
	b = a + 2;

	if(a > b) // 6 n'est pas plus grand que 8, donc rien n'est affiché.
	{
		printf("%d est plus grand que %d\n", a,b);
	}	
	return(0);
}