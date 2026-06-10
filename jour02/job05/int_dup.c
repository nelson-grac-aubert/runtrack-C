/* Dans un fichier int_dup.c, implémenter la fonction int_dup qui alloue un int, y
copie la valeur passée en paramètre, et retourne le pointeur :
int *int_dup(int value);
Fonctions autorisées : malloc() */

#include <stdio.h>
#include <stdlib.h>

int *int_dup(int value)
{
    int *p = malloc(sizeof(int));

    if (!p)
        return NULL;
    *p = value;
    return p;
}

int main(void)
{
    int *a = int_dup(42);
    int *b = int_dup(-7);
    int *c = int_dup(0);

    if (a) printf("a = %d\n", *a); // 42
    if (b) printf("b = %d\n", *b); // -7
    if (c) printf("c = %d\n", *c); // 0
    free(a);
    free(b);
    free(c);
    return 0;
}