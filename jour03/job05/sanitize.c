/* Dans un fichier sanitize.c, implémenter la fonction de nettoyage de chaîne
str_sanitize, qui remplace tout caractère non imprimable par '?', sans en
modifier la longueur :
void str_sanitize(char *s);

Fonctions autorisées : aucune. */

#include "sanitize.h"

void str_sanitize(char *s)
{   
    // En parcourant la string jusqu'au charactère d'échappement \0
    while (*s != 0)
    {   
        // Si le caractère n'est pas imprimable
        if (is_print(*s) == 0)
        {   
            // on le remplace par un '?'
            *s = '?';
        }
    // on incrémente le pointeur
        s++;
    }
}