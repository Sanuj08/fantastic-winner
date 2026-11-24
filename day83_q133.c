// Q133: Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY,
             AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int main(void) {
    const char *names[] = {"", "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY",
                           "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int m = JANUARY; m <= DECEMBER; m++)
        printf("%s: %d days\n", names[m], days[m]);
    return 0;
}
