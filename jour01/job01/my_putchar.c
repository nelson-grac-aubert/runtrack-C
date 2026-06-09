#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, sizeof(c)); 

    return 0;
}

int main() 
{ 

    my_putchar('a');
    my_putchar(' ');
    my_putchar('8');
    my_putchar('!');

    return 0;
}