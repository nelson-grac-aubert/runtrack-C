/* Dans un fichier my_itoa.c, implémenter la fonction my_itoa qui prend en
paramètre un int (positif ou nul) et qui le convertit en chaîne de caractères :

char *my_itoa(int n);
Fonctions autorisées : malloc() */

#include "my_itoa.h"

char *my_itoa(int n)
{   

    // 2 pass : one to count the amount of digits, then init the array, then one to decompose the digits
    int n_saved = n; 
    // initialize a counter to know how many digits/chars will be converted
    int digits_counter = 0;

    if (n == 0)
    { 
        digits_counter = 1; 
    }

    // count the amount of digits
    // while the int is not 0
    while (n != 0)
    {
        int units_digit = n % 10;

        n /= 10; 

        digits_counter += 1; 
        
    }

    char *the_string = malloc(sizeof(char) * (digits_counter + 1));

    for (int i = 0; i < digits_counter; i++)
    {
        int units_digit = n_saved % 10;

        n_saved /= 10;

        char units_char = units_digit + 48;

        the_string[digits_counter - i - 1] = units_char;

    }

    the_string[digits_counter] = '\0';

    return the_string; 

    // alloc the memory for a char array that is the count of the digits
    // fill the array with the digits chars 
}