/* Dans un fichier itoa_hex.c, implémenter la fonction itoa_hex qui prend en
paramètre un int (positif ou nul) et qui le convertit en hexadécimal, avec les
caractères alphabétiques en majuscule :
char *itoa_hex(int n);
Fonctions autorisées : malloc() */

#include "itoa_hex.h"

// Converts a digit in [0-15] to its hex char ('0'-'9', 'A'-'F')
char digit_to_hex_char(int n)
{
    if (n >= 0 && n <= 9)
        return '0' + n;

    if (n >= 10 && n <= 15)
        return 'A' + (n - 10);

    return '?'; // undefined input
}

char *itoa_hex(int n)
{   
    // init a counter for first pass
    int hex_digits_counter = 0;
    // save a copy of n for second pass 
    int n_copy = n; 

    // count how many hex digits there will be 
    while (n != 0)
    {
        n /= 16; 
        hex_digits_counter += 1; 
    }

    // allocate the size of the char array 
    char *the_string = malloc(sizeof(char) * (hex_digits_counter + 1));

    if (n_copy == 0)
    {
        the_string[0] = '0';
        the_string[1] = '\0';
        return the_string;
    }

    the_string[hex_digits_counter] = '\0';

    // determine all the hex digits using the util function above and put 
    // them in the array starting from the right
    while (n_copy != 0)
    {
        int rightmost_digit = n_copy % 16; 

        the_string[hex_digits_counter - 1] = digit_to_hex_char(rightmost_digit); 

        hex_digits_counter--; 

        n_copy /= 16; 
    }
    
    

    return the_string; 
}