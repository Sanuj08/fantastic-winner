// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
// Input: choice (1 = ADD, 2 = SUBTRACT, 3 = MULTIPLY), then two numbers
#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main(void) {
    int choice;
    double a, b;
    scanf("%d %lf %lf", &choice, &a, &b);
    switch ((enum Menu)choice) {
        case ADD:      printf("Result: %.10g\n", a + b); break;
        case SUBTRACT: printf("Result: %.10g\n", a - b); break;
        case MULTIPLY: printf("Result: %.10g\n", a * b); break;
        default:       printf("Invalid choice\n");
    }
    return 0;
}
