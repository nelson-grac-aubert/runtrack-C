#include "fibonacci.h"

#include <stdio.h>

int main() 
{   
    printf("%d\n",fibonacci_it(0)); 
    printf("%d\n",fibonacci_it(1)); 
    printf("%d\n",fibonacci_it(6)); 

    printf("%d\n",fibonacci_rec(0)); 
    printf("%d\n",fibonacci_rec(1)); 
    printf("%d\n",fibonacci_rec(6)); 
    return 0;
}