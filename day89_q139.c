// Q139: Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Size { SMALL, MEDIUM = 5, LARGE };

int main(void) {
    enum Size s = LARGE;
    printf("SMALL = %d\n", SMALL);
    printf("MEDIUM = %d\n", MEDIUM);
    printf("LARGE = %d\n", LARGE);
    printf("SMALL + MEDIUM + LARGE = %d\n", SMALL + MEDIUM + LARGE);
    printf("Variable s holds the integer %d and takes %zu bytes\n", s, sizeof s);
    return 0;
}
