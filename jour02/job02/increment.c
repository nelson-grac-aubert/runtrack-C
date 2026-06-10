/* Dans un fichier increment.c, implémenter la fonction increment qui
incrémenter la valeur pointée :
void increment(int *n);

Fonctions utilisées : aucune. */

#include <stdio.h>

void increment(int *n)
{
    (*n)++;
}

int main(void)
{
    int a = 0;
    int b = -1;
    int c = 41;

    increment(&a);
    increment(&b);
    increment(&c);
    printf("a = %d\n", a); // 1
    printf("b = %d\n", b); // 0
    printf("c = %d\n", c); // 42
    return 0;
}