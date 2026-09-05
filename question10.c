#include <stdio.h>

int main()
{
    int seconds, hours, minutes, remaining;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    remaining = seconds % 3600;
    minutes = remaining / 60;
    seconds = remaining % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}