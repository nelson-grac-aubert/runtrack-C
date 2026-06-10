/* Dans le fichier my_atoi.c, implémenter la fonction my_atoi qui prend en
paramètre une chaîne de caractères et la convertit en int :

int my_atoi(char *str);

Fonctions autorisées : aucune.*/

#include "my_atoi.h"

int my_atoi(char *str)
{
    int my_int = 0;
    int sign = 1;

    // skip leading spaces
    while (!(*str == '-' || *str == '+') && !(*str >= '0' && *str <= '9'))
        str++;

    // handle optional sign
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    // while characters are digits 
    while (*str >= '0' && *str <= '9')
    {   
        // if there's a new one we go to 1 higher power of 10
        my_int *= 10;
        // and register the new one as the units
        my_int += *str - '0';
        str++;
    }

    // go negative if a - was registered 
    return my_int * sign;
}
