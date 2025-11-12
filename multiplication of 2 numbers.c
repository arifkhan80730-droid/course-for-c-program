#include <stdio.h>

int main() {
    int a, b, result;

    // Ask the user for two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Multiply the numbers
    result = a * b;

    // Show the result
    printf("Result of multiplication: %d\n", result);

    return 0;
}
