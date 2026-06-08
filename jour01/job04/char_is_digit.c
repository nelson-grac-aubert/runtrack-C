/* Dans un fichier char_is_digit.c, implémenter la fonction char_is_digit qui
prend en paramètre un caractère et renvoie 1 si le caractère est un chiffre, et
0 si ça n’en est pas un.
int char_is_digit(char c); */

#include <unistd.h>

int char_is_digit(char c) {

    // Ternary condition
    return (c >= '0' && c <= '9') ? 1 : 0;

}

void print_int(int n) {

    // Cast the int (digit 0 or 1) into a char to be written
    char digit = '0' + n;
    write(1, &digit, 1);
    // Write an empty lign for readability 
    write(1, "\n", 1);

}

int main() {

    print_int(char_is_digit('7')); // 1

    print_int(char_is_digit('c')); // 0

    return 0;
}