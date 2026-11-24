// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
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
    int ch, last = '\n', inWord = 0;
    long chars = 0, words = 0, lines = 0;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n')
            lines++;
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
        last = ch;
    }
    if (chars > 0 && last != '\n')
        lines++;
    fclose(fp);
    printf("Characters: %ld\n", chars);
    printf("Words: %ld\n", words);
    printf("Lines: %ld\n", lines);
    return 0;
}
