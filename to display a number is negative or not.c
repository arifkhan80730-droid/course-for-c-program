#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("You entered a negative number: %d\n", number);
    }

    return 0;
}
