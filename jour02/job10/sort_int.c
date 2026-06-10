/* Dans un fichier sort.c, implémenter la fonction sort_int qui prend en
paramètre un tableau d’ints (se terminant par un pointeur NULL) et qui devra
les trier dans l’ordre croissant. Un tri à bulles est suffisant :

int *sort(int *array);

Fonctions autorisées : aucune. */

#include <stdio.h>

// Swaps two integers
static void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Returns the number of elements in the array
static int array_len(int *array)
{
    int len = 0;

    while (array[len])
        len++;
    return len;
}

// Sorts array in ascending order using bubble sort
void sort_int(int *array)
{
    int len = array_len(array);

    for (int i = 0; i < len - 1; i++)
        for (int j = 0; j < len - 1 - i; j++)
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
}

int main(void)
{
    int array[] = {5, 3, 8, 1, 9, 2, 0};

    sort_int(array);
    for (int i = 0; array[i]; i++)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}