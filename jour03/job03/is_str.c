/* Dans le fichier is_str.c, implémenter les fonctions suivantes :
int str_is_digit(char *s);
int str_is_alpha(char *s);
int str_is_print(char *s);

Même rôle que pour le job 01, mais avec des strings. Réutiliser les fonctions du
Job 01 (il peut être intéressant de les inclure...).

Fonctions utilisées : celles du job 01 uniquement. */

#include "../job01/is.h"

int str_is_digit(char *s)
{
    int i = 0;

    while (s[i])
    {
        if (!is_digit(s[i]))
            return 0;
        i++;
    }
    return 1;
}

int str_is_alpha(char *s)
{
    int i = 0;

    while (s[i])
    {
        if (!is_alpha(s[i]))
            return 0;
        i++;
    }
    return 1;
}

int str_is_print(char *s)
{
    int i = 0;

    while (s[i])
    {
        if (!is_print(s[i]))
            return 0;
        i++;
    }
    return 1;
}

int main() {

    printf("%d\n", str_is_alpha("aaaaaaaaaaaaaaa"));
    printf("%d\n", str_is_alpha("aaaaaaaa1234"));

    printf("%d\n", str_is_digit("123456"));
    printf("%d\n", str_is_digit("123456aaaaaaaaaa"));

    printf("%d\n", str_is_print("aaaaaaaaaaaaaaa"));
    printf("%d\n", str_is_print("hi\1"));
    return 0;
}