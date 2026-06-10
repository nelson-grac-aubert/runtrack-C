#include "to_str.h"

int main()
{   

    char lowercased[] = "ABCDEF :)"; 
    char uppercased[] = "abcdef :("; 
    char inverted[] = "aBcDeF 123";

    str_to_lower(lowercased); 
    str_to_upper(uppercased); 
    str_switch_case(inverted); 

    printf("%s\n", lowercased); 
    printf("%s\n", uppercased); 
    printf("%s\n", inverted); 

    return 0; 
}