
#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("----- CALCULATOR -----\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice)
    {
        case 1:
            printf("Addition = %d\n", a + b);
            break;

        case 2:
            printf("Subtraction = %d\n", a - b);
            break;

        case 3:
            printf("Multiplication = %d\n", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Division = %.2f\n", (float)a / b);
            else
                printf("Cannot divide by zero\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

