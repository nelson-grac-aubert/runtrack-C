/* Dans un fichier my_strcpy.c, implémenter la fonction my_strcpy qui prend
en paramètres une chaîne de caractères de destination et une de source, et
qui copie la source dans la destination.
char *my_strcpy(char *dst, char *src);

Fonctions autorisées : aucune. */

#include <stdio.h>

char *my_strcpy(char *dst, char *src)
{
    int i = 0; // index to traverse both strings

    while (src[i]) // loop until null terminator
    {
        dst[i] = src[i]; // copy current character
        i++;
    }
    dst[i] = '\0'; // null-terminate the destination

    printf("%s", dst);
    return (dst);
}

int main()
{
    char copied_string[] = "Hello C!";  // source string
    char destination_string[9];         // destination buffer, sized for source + '\0'

    my_strcpy(destination_string, copied_string); // copy source into destination
}