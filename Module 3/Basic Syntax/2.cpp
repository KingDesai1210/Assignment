#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;

    printf("Simple Calculator:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case 1:  // Addition
            result = num1 + num2;
            printf("Result: %d + %d = %.2f\n", num1, num2, result);
            break;
        case 2:  // Subtraction
            result = num1 - num2;
            printf("Result: %d - %d = %.2f\n", num1, num2, result);
            break;
        case 3:  // Multiplication
            result = num1 * num2;
            printf("Result: %d * %d = %.2f\n", num1, num2, result);
            break;
        case 4:  // Division
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        case 5:  // Modulo
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d %% %d = %.0f\n", num1, num2, result);
            } else {
                printf("Error! Modulo by zero.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
