#include <stdio.h>

int main(void) {
    int x = 42;
    int *p = &x;

    printf("%d\n", *p);  // Prints the value pointed to by p (42)
    *p = 100;            // Updates x through the pointer
    printf("%d\n", x);

    return 0;
}
