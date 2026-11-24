// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
// Input: 0 (SUCCESS), 1 (FAILURE) or 2 (TIMEOUT)
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    int value = SUCCESS;
    scanf("%d", &value);
    enum Status status = (enum Status)value;
    switch (status) {
        case SUCCESS: printf("Operation completed successfully\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
        default:      printf("Unknown status\n");
    }
    return 0;
}
