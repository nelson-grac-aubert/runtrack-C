/* Dans un fichier is.c, implémenter les fonctions suivantes. Chacune retourne 1
si une condition est vraie, et 0 sinon. Utiliser uniquement des comparaisons :

int is_digit(char c); (c est un chiffre)
int is_lower(char c); (c est un un caractère minuscule)
int is_upper(char c); (c est un caractère majuscule)
int is_alpha(char c); (c est alphabétique)
int is_print(char c); (c est un caractère imprimable)

Référez-vous éventuellement à la table ASCII pour vérifier les bornes des
séries de caractères concernées. is_alpha devrait réutiliser is_lower et
is_upper.

Fonctions utilisées : aucune. */

#include <stdio.h>

int is_digit(char c) 
{   
    if (c <= '9' && c >= '0')
    {
        return 1; 
    }
    return 0;
}
int is_lower(char c) 
{ 
    if (c <= 'z' && c >= 'a')
    {
        return 1; 
    }
    return 0;
}
int is_upper(char c) 
{ 
    if (c <= 'Z' && c >= 'A')
    {
        return 1; 
    }
    return 0;
}
int is_alpha(char c) 
{ 
    if (is_upper(c) || is_lower(c))
    {
        return 1;
    }
    return 0;
}

int is_print(char c) 
{ 
    if (c <= '~' && c >= ' ')
    {
        return 1;
    }
    return 0;
}

int main() 
{   

    printf("%d\n", is_digit('1')); 
    printf("%d\n", is_digit(' ')); 

    printf("%d\n", is_lower('a')); 
    printf("%d\n", is_lower('A')); 

    printf("%d\n", is_upper('A')); 
    printf("%d\n", is_upper('a')); 
    
    printf("%d\n", is_alpha('A')); 
    printf("%d\n", is_alpha('a')); 
    printf("%d\n", is_alpha(' ')); 

    printf("%d\n", is_print('a')); 
    printf("%d\n", is_print(2)); 

    return 0;
}