/* Idem que le job 02, mais pour des strings :

void str_to_lower(char *s);
void str_to_upper(char *s);
void str_switch_case(char *s);

Fonctions utilisées : celles du job 02.
Les strings sont modifiées en place. Pensez aussi à réutiliser des fonctions
déjà écrites ! */

#include "to_str.h"

void str_to_lower(char *s)
{
    while (*s)
    {
        *s = to_lower(*s);
        s++;
    }
}

void str_to_upper(char *s)
{
    while (*s)
    {
        *s = to_upper(*s);
        s++;
    }
}

void str_switch_case(char *s)
{
    while (*s)
    {
        *s = switch_case(*s);
        s++;
    }
}


