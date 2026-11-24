// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main(void) {
    static char s[100005];
    int last[256], start = 0, best = 0;
    for (int i = 0; i < 256; i++)
        last[i] = -1;
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start)
            start = last[c] + 1;
        last[c] = i;
        if (i - start + 1 > best)
            best = i - start + 1;
    }
    printf("%d\n", best);
    return 0;
}
