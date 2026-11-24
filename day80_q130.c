// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
// Input: n, then n lines of: name roll marks   (name is a single word)
#include <stdio.h>

int main(void) {
    int n, roll;
    float marks;
    char name[50];
    scanf("%d", &n);

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: could not create students.txt\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%49s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open students.txt\n");
        return 1;
    }
    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3)
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", name, roll, marks);
    fclose(fp);
    return 0;
}
