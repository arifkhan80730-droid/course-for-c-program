#include <stdio.h>
int main() { int n, num1 = 0, num2 = 1, nextNum;

printf("Enter the number of Fibonacci numbers to generate: ");
scanf("%d", &n);

printf("Fibonacci Series: ");

for (int i = 1; i <= n; ++i) {
    printf("%d, ", num1);
    nextNum = num1 + num2;
    num1 = num2;
    num2 = nextNum;
}

return 0;
}
