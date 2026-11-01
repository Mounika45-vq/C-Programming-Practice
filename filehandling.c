
#include <stdio.h>

int main() {
    FILE *fp;
    int roll;
    char name[50];
    float marks;

    // Open file in append mode
    fp = fopen("students.txt", "a");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    // Get student details
    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf(" %49[^\n]", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    // Save details into file
    fprintf(fp, "Roll: %d\nName: %s\nMarks: %.2f\n\n",
            roll, name, marks);

    // Close file
    fclose(fp);

    printf("Student details saved successfully!\n");

    return 0;
}
