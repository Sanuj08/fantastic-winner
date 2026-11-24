// Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
// Input: n, then n elements, then k
#include <stdio.h>
#include <stdlib.h>

static int a[100005];

static int cmp(const void *x, const void *y) {
    int p = *(const int *)x, q = *(const int *)y;
    return (p > q) - (p < q);
}

int main(void) {
    int n, k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    if (k < 1 || k > n) {
        printf("-1\n");
        return 0;
    }
    qsort(a, n, sizeof(int), cmp);
    printf("%d\n", a[k - 1]);
    return 0;
}
