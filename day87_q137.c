// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
// Input: 0 (ADMIN), 1 (USER) or 2 (GUEST)
#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main(void) {
    int value = GUEST;
    scanf("%d", &value);
    switch ((enum Role)value) {
        case ADMIN: printf("Welcome, Admin! You have full access.\n"); break;
        case USER:  printf("Welcome, User! You have standard access.\n"); break;
        case GUEST: printf("Welcome, Guest! You have read-only access.\n"); break;
        default:    printf("Unknown role\n");
    }
    return 0;
}
