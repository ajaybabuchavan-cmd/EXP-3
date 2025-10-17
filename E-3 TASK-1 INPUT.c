#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

menu:
    printf("\n*** Calculator Menu ***\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            goto menu;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            goto menu;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            goto menu;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if(num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Cannot divide by zero!\n");
            goto menu;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Try again.\n");
            goto menu;
    }

    return 0;
}