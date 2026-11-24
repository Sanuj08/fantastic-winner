// Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
// Input: name (one line), then age
#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];
    int age;
    fgets(name, sizeof name, stdin);
    name[strcspn(name, "\n")] = '\0';
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: could not create info.txt\n");
        return 1;
    }
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);
    fclose(fp);
    printf("Data saved successfully in info.txt\n");
    return 0;
}
