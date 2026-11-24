// Q144: Write a function that accepts a structure as parameter and prints its members.
// Input: name (one line), then roll_no and marks
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main(void) {
    struct Student s;
    scanf(" %49[^\n]", s.name);
    scanf("%d %f", &s.roll_no, &s.marks);
    printStudent(s);
    return 0;
}
