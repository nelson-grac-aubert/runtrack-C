#include "sanitize.h"

int main() { 

    char to_be_sanitized[] = "I \1am \7dirty\4";

    str_sanitize(to_be_sanitized); 

    printf("%s", to_be_sanitized);

    return 0;
}