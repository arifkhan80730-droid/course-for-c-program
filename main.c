#include <stdio.h>

int main() {
    int a, b, result;

    // Ask the user for two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Add a and b
    result = a + b;

    // Show the result
    printf("Result of addition: %d\n", result);

    return 0;
}
