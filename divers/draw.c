#include <stdio.h>

void drawrect(int w, int h)
{
    int i, j;
    for (i = 0; i < w; i++)
	putchar('*');
    putchar('\n');
    for (i = 2; i < h; i++)
    {
        putchar('*');
        for (j = 2; j < w; j++)
	    putchar(' ');
	putchar('*');
	putchar('\n');
    }
    for (i = 0; i < w; i++)
	putchar('*');
    putchar('\n');
}

int main()
{
while(1){
    int hauteur, largeur;
    printf("Hauteur ? : ");
    scanf("%d", &hauteur);
    printf("Largeur ? : ");
    scanf("%d", &largeur);
    drawrect(largeur,hauteur);
}
}