/* Dans un fichier job12.c, écrivez un programme qui prend un entier n en
argument et affiche :

● sa valeur en décimal (utilise my_itoa)
● sa valeur en hexadécimal (utilise itoa_hex)
● sa factorielle si < 10
● le n-ième Fibonacci si < 20

Fonctions autorisées : write(), malloc(), free() */

#include "job12.h"

int main(int argc, char **argv) 
{   

    int n = my_atoi(argv[1]);

    printf("The decimal value of your int is %s\n", my_itoa(n)); 
    printf("The hex value of your int is %s\n", itoa_hex(n));

    if (n < 10) 
    {  
    printf("The factorial of your int is %d\n", factorial(n)); 
    }

    if (n < 20)
    {
    printf("The [your int]th Fibonacci number is %d\n", fibonacci_it(n)); 
    }
}

// compilation command : gcc job12.c ../job10/my_itoa.c ../job11/itoa_hex.c ../job08/fibonacci.c ../job07/factorial.c ../job09/my_atoi.c