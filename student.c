
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;

    printf("---- STUDENT MANAGEMENT ----\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf(" %49[^\n]", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n---- STUDENT DETAILS ----\n");

    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
