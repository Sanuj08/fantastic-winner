// Q146: Create Employee structure with nested Date structure for joining date and print details.
// Input: name (one line), then emp_id, salary, and the joining date as: day month year
#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int emp_id;
    char name[50];
    float salary;
    struct Date joining_date;
};

int main(void) {
    struct Employee e;
    fgets(e.name, sizeof e.name, stdin);
    e.name[strcspn(e.name, "\n")] = '\0';
    scanf("%d %f", &e.emp_id, &e.salary);
    scanf("%d %d %d", &e.joining_date.day, &e.joining_date.month, &e.joining_date.year);

    printf("Employee ID: %d\n", e.emp_id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d/%02d/%04d\n", e.joining_date.day, e.joining_date.month, e.joining_date.year);
    return 0;
}
