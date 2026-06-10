/* Dans un fichier swap.c, implémenter la fonction swap qui prend en
paramètres deux pointeurs sur int et échange leur valeur :
void swap(int *a, int *b);

Fonctions autorisées : aucune. */

#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int x = 10;
    int y = 42;

    printf("before: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("after:  x = %d, y = %d\n", x, y);
    return 0;
}