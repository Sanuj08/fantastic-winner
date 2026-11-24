// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
// Input: n, then n elements   |   one pass using a hash set (open addressing)
#include <stdio.h>

#define SIZE (1 << 18)

static int table[SIZE];
static char used[SIZE];

int main(void) {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        unsigned int h = ((unsigned int)x * 2654435761u) >> 14;
        while (used[h] && table[h] != x)
            h = (h + 1) & (SIZE - 1);
        if (used[h]) {
            printf("%d\n", x);
            return 0;
        }
        used[h] = 1;
        table[h] = x;
    }
    printf("-1\n");
    return 0;
}
