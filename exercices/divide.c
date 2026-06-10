#include <stdio.h>

int main(void)
{
    int cinq = 5;
    int deux = 2;
    // float div = cinq / deux;                     <- DONNERA 2 et 2.000000
    float div = (float) cinq / deux;

    printf("%d\n", (int)div); // 2
    printf("%f\n", div);      // 2.500000

    return 0;
}