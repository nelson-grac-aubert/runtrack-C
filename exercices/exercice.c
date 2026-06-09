#include <stdio.h>

int main()
{
    int a = 42;
    int *p = &a;
    int *null_pointer = NULL;

    printf("Valeur de a : %d \n", a);
    printf("Valeur du pointeur qui pointe vers l'adresse memoire de a : %d \n", *p);
    printf("Adresse memoire qui contient a : %p \n", (void*)&a);
    printf("Adresse memoire qui contient p : %d\n", (void*)&p);
    printf("Valeur de p, c'est a dire l'adresse memoire vers laquelle il pointe, a savoir celle de a : %p", (void*)p);
    
    return 0;
}