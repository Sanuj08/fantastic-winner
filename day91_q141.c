// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
// Input: name (one line), then roll_no and marks
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student s;
    fgets(s.name, sizeof s.name, stdin);
    s.name[strcspn(s.name, "\n")] = '\0';
    scanf("%d %f", &s.roll_no, &s.marks);
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
    return 0;
}
