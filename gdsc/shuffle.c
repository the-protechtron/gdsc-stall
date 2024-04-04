#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    printf("Select operation (+, -, *, /):\n");
    if (scanf(" %c", &operation) != 1) {
        printf("Invalid operation!\n");
        return 0;
    }

    if (scanf("%f %f", &num1, &num2) != 2) {
        printf("Invalid input!\n");
        return 0;
    }

    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Cannot divide by zero!\n");
                return 0;
            }
            break;
        default:
            printf("Invalid operation!\n");
            return 0;
    }

    printf("Result: %.2f\n", result);
    
    return 0;
}
