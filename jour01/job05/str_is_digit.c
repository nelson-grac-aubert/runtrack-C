/* Dans un fichier char_is_digit.c, implémenter la fonction char_is_digit qui
prend en paramètre un caractère et renvoie 1 si le caractère est un chiffre, et
0 si ça n’en est pas un.
int char_is_digit(char c); */

/* Dans le même fichier, implémenter la fonction str_is_digit qui prend en
paramètre une chaîne de caractères et renvoie 1 si la chaîne ne contient que
des chiffres, et 0 si ce n’est pas le cas :
int str_is_digit(char *str);
Fonctions autorisées : char_is_digit() */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

int char_is_digit(char c) {

    // Ternary condition
    return (c >= '0' && c <= '9') ? 1 : 0;

}


int str_is_digit(char *str) {

    while (*str != '\0') {
        if (!char_is_digit(*str))
            return 0;
        str++;
    }
    return 1;
}

// Deprecated function I used because I didn't know printf fuck my liiiiiiiiiife
// void print_int(int n) {

//     // Cast the int (digit 0 or 1) into a char to be written
//     char digit = '0' + n;
//     write(1, &digit, 1);
//     // Write an empty lign for readability 
//     write(1, "\n", 1);

// }

int main() {

    printf("Is 7 a digit? (1 for yes, 0 for no) %d\n", char_is_digit('7'));
    printf("Is c a digit? (1 for yes, 0 for no) %d\n", char_is_digit('c'));

    printf("Is 12456789 only composed of digits? (1 for yes, 0 for no) %d\n", str_is_digit("123456789"));
    printf("Is 1234567EGF only composed of digits? (1 for yes, 0 for no) %d\n", str_is_digit("1234567EGF"));

    return 0;
}