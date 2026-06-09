/* Dans un fichier my_strcmp.c, implémenter la fonction my_strcmp qui prend
qui prend en paramètre deux chaînes de caractères, les compare, et renvoie
une valeur négative si la première chaîne est inférieure à la deuxième,
positive si elle est supérieure à la deuxième, et 0 si elles sont identiques :
int my_strcmp(char *s1, char *s2);
Fonctions autorisées : aucune.

Note :
Une chaîne est “inférieure” à une autre si le premier caractère différent dans
les deux chaînes est inférieur (dans l’ordre de la table ASCII) dans la première
chaîne par rapport à celui de la deuxième chaîne. Par exemple, la chaîne
“abc” est inférieure à la chaîne “abd” parce que les deux premiers caractères
sont identiques, mais “c” est inférieur à “d” dans la table ASCII. */

#include <stdio.h>

int my_strcmp(char *string_a, char *string_b)
{

}

int main() 
{   

    char inferior_string[] = "aaabfgh";
    char inferior_string_two[] = "aaabfgh";
    char superior_string[] = "aaac";

    printf("Expected -1 : %d", my_strcmp(inferior_string, superior_string));
    printf("Expected 1 : %d", my_strcmp(superior_string, inferior_string));
    printf("Expected 0 : %d", my_strcmp(inferior_string, inferior_string));

    return 0; 
}