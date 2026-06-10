/* Dans un fichier array_delete.c, implémenter la fonction array_delete qui
libère la mémoire du tableau passé en paramètre :
void array_delete(int *arr);
Fonctions autorisées : free() */

#include <stdio.h>
#include <stdlib.h>

void array_delete(int *arr)
{
    free(arr);
}

int main(void)
{
    int *a = malloc(sizeof(int) * 3);
    int *b = malloc(sizeof(int));
    int *c = NULL;

    a[0] = 1; a[1] = 2; a[2] = 3;
    *b = 42;

    printf("a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
    printf("b = %d\n", *b);

    array_delete(a);
    array_delete(b);
    array_delete(c); // free(NULL) est valide en C
    return 0;
}