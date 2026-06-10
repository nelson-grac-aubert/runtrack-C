/* Dans un fichier sum_array.c, implémenter la fonction sum_array qui calcule
la somme des éléments dans un tableau d’entier, sans utiliser la syntaxe avec
les crochets (arr[]) :

int sum_array(int *arr, int n);

Fonctions utilisées : aucune. */

#include <stdio.h>

int sum_array(int *arr, int n)
{
    int sum = 0;

    while (n-- > 0)
        sum += *arr++;
    return sum;
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {-3, 0, 3};
    int c[] = {42};

    printf("a = %d\n", sum_array(a, 5)); // 15
    printf("b = %d\n", sum_array(b, 3)); // 0
    printf("c = %d\n", sum_array(c, 1)); // 42
    return 0;
}