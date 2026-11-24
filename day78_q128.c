// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
// Input: the file name
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[256];
    scanf("%255s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: could not open %s\n", filename);
        return 1;
    }
    int ch, vowels = 0, consonants = 0;
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
