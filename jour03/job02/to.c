/* Dans un fichier to.c, implémenter les fonctions suivantes :

char to_lower(char c);
char to_upper(char c);
char switch_case(char c);

Ces fonctions transforment les minuscules en majuscules et inversement. Si
le caractère n’est pas alphabétique, il est retourné tel quel. switch_case
inverse la casse et doit être défini en utilisant les deux autres fonctions.

Fonctions utilisées : aucune. */

#include "to.h"

char to_lower(char c) 
{   
    if (c <= 'Z' && c >= 'A')
    {
        c += 32;  
    }

    return c;
}

char to_upper(char c) 
{   
    if (c <= 'z' && c >= 'a')
    {
        c -= 32;  
    }

    return c;
}

char switch_case(char c) 
{
    if (c >= 'a' && c <= 'z')
        return to_upper(c);
    if (c >= 'A' && c <= 'Z')
        return to_lower(c);
    return c;
} 

// int main()
// {   
//     char unchanged = ';';
//     char lower = 'a';
//     char lower_two = 'b';
//     char upper = 'A'; 
//     char upper_two = 'B';

//     printf("%c", to_upper(lower)); 
//     printf("%c", to_lower(upper)); 

//     printf("%c", switch_case(lower_two)); 
//     printf("%c", switch_case(upper_two)); 

//     printf("%c", to_upper(unchanged)); 
//     printf("%c", to_lower(unchanged)); 
//     printf("%c", switch_case(unchanged)); 
// }