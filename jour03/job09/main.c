#include "my_atoi.h"

#include <stdio.h>

int main()
{   
    printf("%d\n", my_atoi("Bonjour -12345678 salut"));
    printf("%d\n", my_atoi("Bonjour 15678 salut"));
    printf("%d\n", my_atoi("973456748"));
    printf("%d\n", my_atoi("                   -8kiokiki 9"));
    return 0;
}