// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open numbers.txt\n");
        return 1;
    }
    int x, count = 0;
    long long sum = 0;
    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }
    fclose(fp);
    if (count == 0) {
        printf("No numbers found in the file\n");
        return 0;
    }
    printf("Sum: %lld\n", sum);
    printf("Average: %.2f\n", (double)sum / count);
    return 0;
}
