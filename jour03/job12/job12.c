/* Dans un fichier job12.c, écrivez un programme qui prend un entier n en
argument et affiche :

● sa valeur en décimal (utilise my_itoa)
● sa valeur en hexadécimal (utilise itoa_hex)
● sa factorielle si < 10
● le n-ième Fibonacci si < 20

Fonctions autorisées : write(), malloc(), free() */

#include "job12.h"

/* main est une fonction comme les autres. Le système d'exploitation l'appelle en lui passant deux arguments.

argc — argument count
C'est un simple int qui contient le nombre d'arguments passés au programme.
Exemple : 
./job12 42
→ argc == 2
Index 0 ./job12
Index 1 : "42"
Le nom du programme lui-même compte toujours comme argument, donc argc est toujours ≥ 1.

argv — argument vector
Le type : char **argv
C'est un pointeur vers un pointeur de char, ce qui représente un tableau de chaînes de caractères.

Ces deux écritures sont strictement équivalentes :
int main(int argc, char **argv)   // pointeur vers pointeur
int main(int argc, char *argv[])  // tableau de pointeurs

argv
  │
  ▼
┌──────────┐
│ argv[0]  │──► "./job12\0"
├──────────┤
│ argv[1]  │──► "42\0"
├──────────┤
│ argv[2]  │──► NULL        ← toujours terminé par NULL
└──────────┘

Chaque argv[i] est un char * pointant vers une chaîne terminée par \0.
argv[argc] vaut toujours NULL (garanti par le standard C).
*/
int main(int argc, char **argv) 
{   
    
    int n = my_atoi(argv[1]);

    char *dec = my_itoa(n);
    char *hex = itoa_hex(n);
    
    printf("The decimal value of your int is %s\n", dec); 
    printf("The hex value of your int is %s\n", hex);

    free(dec);
    free(hex);

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