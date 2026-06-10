/* Dans un fichier address.c, implémenter la fonction print_address qui affiche
l’adresse contenue dans le pointeur (en hexadécimal) :
void print_address(int *n);
Fonctions autorisées : write() */

#include <stdio.h>

#include <stdio.h>

void print_address(int *n)
{
    printf("%p\n", (void *)n);
}

int main(void)
{
    int a = 42;
    int b = 0;

    print_address(&a);
    print_address(&b);
    print_address(NULL);
    return 0;
}