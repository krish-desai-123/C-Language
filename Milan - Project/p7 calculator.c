#include <stdio.h>

// Function prototypes for arithmetic operations
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int modulus(int a, int b) {
    return a % b;
}

int main() {
    char choice;
    int num1, num2;
    
    do {
        printf("\n--- Arithmetic Operations Menu ---\n");
        printf("a. Addition (+)\n");
        printf("b. Subtraction (-)\n");
        printf("c. Multiplication (*)\n");
        printf("d. Division (/)\n");
        printf("e. Modulus (%%)\n");
        printf("q. Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);  // space before %c to consume newline

        if(choice == 'q' || choice == 'Q') {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);

        switch(choice) {
            case 'a':
            case 'A':
                printf("Result: %d + %d = %d\n", num1, num2, add(num1, num2));
                break;
            case 'b':
            case 'B':
                printf("Result: %d - %d = %d\n", num1, num2, subtract(num1, num2));
                break;
            case 'c':
            case 'C':
                printf("Result: %d * %d = %d\n", num1, num2, multiply(num1, num2));
                break;
            case 'd':
            case 'D':
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result: %d / %d = %.2f\n", num1, num2, divide(num1, num2));
                }
                break;
            case 'e':
            case 'E':
                if (num2 == 0) {
                    printf("Error: Modulus by zero is not allowed.\n");
                } else {
                    printf("Result: %d %% %d = %d\n", num1, num2, modulus(num1, num2));
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(1);

    return 0;
}
