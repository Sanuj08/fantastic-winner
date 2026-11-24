// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
// Input: file name, then the line of text to append
#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[256], text[1000];
    scanf("%255s", filename);
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;                                   // discard rest of the first line
    fgets(text, sizeof text, stdin);
    text[strcspn(text, "\n")] = '\0';

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: could not open %s\n", filename);
        return 1;
    }
    fprintf(fp, "%s\n", text);
    fclose(fp);
    printf("Text appended successfully\n");
    return 0;
}
