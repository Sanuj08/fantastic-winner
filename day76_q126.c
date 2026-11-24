// Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
// Input: the file name
#include <stdio.h>

int main(void) {
    char filename[256];
    scanf("%255s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: file '%s' does not exist\n", filename);
        return 1;
    }
    int ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}
