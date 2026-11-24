// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
// Input: source file name, destination file name
#include <stdio.h>

int main(void) {
    char src[256], dest[256];
    scanf("%255s %255s", src, dest);
    FILE *in = fopen(src, "r");
    if (in == NULL) {
        printf("Error: could not open %s\n", src);
        return 1;
    }
    FILE *out = fopen(dest, "w");
    if (out == NULL) {
        printf("Error: could not create %s\n", dest);
        fclose(in);
        return 1;
    }
    int ch;
    while ((ch = fgetc(in)) != EOF)
        fputc(ch, out);
    fclose(in);
    fclose(out);
    printf("File copied successfully\n");
    return 0;
}
