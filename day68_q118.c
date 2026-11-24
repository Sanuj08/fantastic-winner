// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
// Input: n, then n elements
#include <stdio.h>

int main(void) {
    long long n, x, sum = 0;
    scanf("%lld", &n);
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &x);
        sum += x;
    }
    printf("%lld\n", n * (n + 1) / 2 - sum);
    return 0;
}
