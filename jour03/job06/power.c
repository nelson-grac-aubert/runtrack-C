/* Dans un fichier power.c, implémentez la fonction power qui prend en
paramètre deux int et élève le premier à la puissance du deuxième :
int power(int n, int power);

Fonctions autorisées : aucune.*/

#include "power.h"

int power(int n, int exp)
{
    if (exp < 0)
    {
        return 0;
    }
       
    if (exp == 0)
    {
        return 1;
    }
        
    int result = 1;
    while (exp--)
    {
        result *= n;
    }
        
    return result;
}