/* Dans un fichier array_clone.c, implémenter la fonction array_clone qui
alloue un nouveau tableau d’int et y copie les n premières valeurs. S’il y a
moins de valeurs que n, on s’arrête au total de valeurs dans arr :
int *array_clone(int *arr, int n);
Fonctions autorisées : malloc() */

#include <stdio.h>
#include <stdlib.h>

int *array_clone(int *arr, int n)
{
    int *clone;
    int i;

    if (!arr || n <= 0)
        return NULL;
    clone = malloc(sizeof(int) * n);
    if (!clone)
        return NULL;
    i = 0;
    while (i < n)
    {
        clone[i] = arr[i];
        i++;
    }
    return clone;
}

int main(void)
{
    int src[] = {1, 2, 3, 4, 5};
    int *full = array_clone(src, 5);
    int *partial = array_clone(src, 3);
    int *over = array_clone(src, 8);
    int i;

    printf("full (n=5):    ");
    for (i = 0; i < 5; i++) printf("%d ", full[i]);    // 1 2 3 4 5
    printf("\npartial (n=3): ");
    for (i = 0; i < 3; i++) printf("%d ", partial[i]); // 1 2 3
    printf("\nover (n=8):    ");
    for (i = 0; i < 5; i++) printf("%d ", over[i]);    // 1 2 3 4 5
    printf("\n");
    free(full);
    free(partial);
    free(over);
    return 0;
}