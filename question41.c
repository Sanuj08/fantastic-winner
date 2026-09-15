//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int n, first, last, temp;

    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp = temp / 10;
    }

    first = temp;

    n = n / 10;
    n = n * 10 + first;
    
    temp = n;
    int digits = 1;

    while (temp >= 10) {
        temp = temp / 10;
        digits *= 10;
    }

    n = n - first * digits + last * digits;

    printf("%d", n);

    return 0;
}
