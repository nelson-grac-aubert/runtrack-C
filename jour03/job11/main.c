#include "itoa_hex.h"

#include <stdio.h>

int main()
{ 
    printf("%s\n", itoa_hex(15674)); 
    printf("%s\n", itoa_hex(0));
    printf("%s\n", itoa_hex(17));
}