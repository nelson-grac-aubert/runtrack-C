/* Dans un fichier factorial.c, implémenter la fonction factorial qui calcule
récursivement la factorielle d’un int passé en paramètre :

int factorial(int n);
Fonctions autorisées : aucune. */

#include "factorial.h"

int factorial (int n)
{
    int result = 1;
    
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result; 
}