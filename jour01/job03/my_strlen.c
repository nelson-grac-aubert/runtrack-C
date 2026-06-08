// Dans un fichier my_strlen.c, implémenter la fonction my_strlen qui prend en
// paramètre une chaîne de caractères et renvoie sa taille :
// int my_strlen(char *c);

#include <unistd.h>

int my_strlen(char *c) {
    
    int len = 0;

    while (*c != 0) {
        len++;
        c++; 
    }
    
    return len; 
}

// Recursive helper to print digits in the right order
static void print_digits(int n) {
    char digit;

    // If the int has multiple digits
    if (n >= 10)
        // Recursive call on the smaller power of 10 
        print_digits(n / 10);
    // The digit is the modulo of the division by 10 
    digit = '0' + (n % 10);
    // Print the right-most digit 
    write(1, &digit, 1);
}

int main() { 

    char str[] = "Thisstringis28characterslong"; 

    print_digits(my_strlen(str));

    return 0;
}