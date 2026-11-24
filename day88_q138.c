// Q138: Print all enum names and integer values using a loop.
#include <stdio.h>

enum Color { RED, GREEN, BLUE, YELLOW, ORANGE, COLOR_COUNT };

int main(void) {
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW", "ORANGE"};
    for (int c = RED; c < COLOR_COUNT; c++)
        printf("%s = %d\n", names[c], c);
    return 0;
}
