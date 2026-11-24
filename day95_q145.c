// Q145: Return a structure containing top student's details from a function.
// Input: n, then for each student - name (one line), then roll_no and marks
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student s[], int n) {
    struct Student top = s[0];
    for (int i = 1; i < n; i++)
        if (s[i].marks > top.marks)
            top = s[i];
    return top;
}

int main(void) {
    struct Student s[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %49[^\n]", s[i].name);
        scanf("%d %f", &s[i].roll_no, &s[i].marks);
    }
    struct Student top = findTopStudent(s, n);
    printf("Top student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);
    return 0;
}
