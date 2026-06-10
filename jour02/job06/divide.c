/* Dans un fichier divide.c, implémenter la fonction divide qui prend en
paramètre un pointeur sur int et divise la valeur de l’int par 2 :
void divide(int *val);
Fonctions autorisées : aucune. */

#include <stdio.h>

void divide(int *val)
{
    *val /= 2;
}

int main(void)
{
    int a = 42;
    int b = 7;
    int c = -10;
    int d = 1;

    divide(&a);
    divide(&b);
    divide(&c);
    divide(&d);
    printf("a = %d\n", a); // 21
    printf("b = %d\n", b); // 3  (division entière)
    printf("c = %d\n", c); // -5
    printf("d = %d\n", d); // 0
    return 0;
}