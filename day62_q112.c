// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
// Input: n, then n elements
#include <stdio.h>

static int a[100005];

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    long long current = a[0], best = a[0];
    for (int i = 1; i < n; i++) {
        current = (current + a[i] > a[i]) ? current + a[i] : a[i];
        if (current > best)
            best = current;
    }
    printf("%lld\n", best);
    return 0;
}
