// Q135: Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Level { LOW = 10, MEDIUM, HIGH, CRITICAL };

int main(void) {
    printf("LOW = %d\n", LOW);
    printf("MEDIUM = %d\n", MEDIUM);
    printf("HIGH = %d\n", HIGH);
    printf("CRITICAL = %d\n", CRITICAL);
    return 0;
}
