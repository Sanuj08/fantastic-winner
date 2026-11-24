// Q140: Define a struct with enum Gender and print person's gender.
// Input: name (one line), then gender code (0 = Male, 1 = Female, 2 = Other)
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main(void) {
    struct Person p;
    int g;
    fgets(p.name, sizeof p.name, stdin);
    p.name[strcspn(p.name, "\n")] = '\0';
    scanf("%d", &g);
    p.gender = (enum Gender)g;

    printf("Name: %s\n", p.name);
    switch (p.gender) {
        case MALE:   printf("Gender: Male\n"); break;
        case FEMALE: printf("Gender: Female\n"); break;
        case OTHER:  printf("Gender: Other\n"); break;
        default:     printf("Gender: Unknown\n");
    }
    return 0;
}
