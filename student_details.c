#include <stdio.h>

int main() {
    char name[50];
    int age;
    char branch[20];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your branch: ");
    scanf("%19s", branch);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Branch: %s\n", branch);

    return 0;
}