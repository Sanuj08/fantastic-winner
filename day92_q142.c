// Q142: Store details of 5 students in an array of structures and print all.
// Input: for each of the 5 students - name (one line), then roll_no and marks
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student s[5];
    for (int i = 0; i < 5; i++) {
        scanf(" %49[^\n]", s[i].name);
        scanf("%d %f", &s[i].roll_no, &s[i].marks);
    }
    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n", s[i].marks);
    }
    return 0;
}
