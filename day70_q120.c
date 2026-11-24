// Q120: Write a program to take a string input. Change it to sentence case.
// (first letter of every sentence in capitals, everything else in small letters)
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000];
    int capitalizeNext = 1;
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (isalpha(c)) {
            putchar(capitalizeNext ? toupper(c) : tolower(c));
            capitalizeNext = 0;
        } else {
            putchar(c);
            if (c == '.' || c == '!' || c == '?')
                capitalizeNext = 1;
        }
    }
    putchar('\n');
    return 0;
}
