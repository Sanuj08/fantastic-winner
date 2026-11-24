// Q143: Find and print the student with the highest marks.
// Input: n, then for each student - name (one line), then roll_no and marks
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student s[100];
    int n, top = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %49[^\n]", s[i].name);
        scanf("%d %f", &s[i].roll_no, &s[i].marks);
        if (s[i].marks > s[top].marks)
            top = i;
    }
    printf("Student with the highest marks:\n");
    printf("Name: %s\n", s[top].name);
    printf("Roll No: %d\n", s[top].roll_no);
    printf("Marks: %.2f\n", s[top].marks);
    return 0;
}
