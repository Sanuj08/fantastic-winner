// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
// Input: m, m elements, n, n elements
#include <stdio.h>

static int a[100005], b[100005], c[200010];

int main(void) {
    int m, n, i = 0, j = 0, k = 0;
    scanf("%d", &m);
    for (int x = 0; x < m; x++)
        scanf("%d", &a[x]);
    scanf("%d", &n);
    for (int x = 0; x < n; x++)
        scanf("%d", &b[x]);
    while (i < m && j < n)
        c[k++] = (a[i] <= b[j]) ? a[i++] : b[j++];
    while (i < m)
        c[k++] = a[i++];
    while (j < n)
        c[k++] = b[j++];
    for (int x = 0; x < k; x++)
        printf("%d%c", c[x], x == k - 1 ? '\n' : ' ');
    return 0;
}
