/* Dans un fichier my_strdup.c, implémenter la fonction my_strdup qui prend
en paramètre une chaîne de caractères, alloue la mémoire nécessaire pour
une copie de cette chaîne, et la copie dans l’espace mémoire fraîchement
alloué :
char *swap(char *str);
Fonctions autorisées : malloc()
Indice : vous pouvez vous inspirer de my_strcpy du J01... */

#include <stdlib.h>
#include <stdio.h>

static int my_strlen(const char *str)
{
    int len = 0;

    while (str[len])
        len++;
    return len;
}

static void my_strcpy(char *dest, const char *src)
{
    int i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

char *my_strdup(const char *str)
{
    char *copy;

    copy = malloc(my_strlen(str) + 1);
    if (!copy)
        return NULL;
    my_strcpy(copy, str);
    return copy;
}

int main(void)
{
    char *result = my_strdup("Hello, world!");

    if (!result)
    {
        printf("Allocation failed\n");
        return 1;
    }
    printf("Original : %s\n", "Hello, world!");
    printf("Copie    : %s\n", result);
    free(result);
    return 0;
}