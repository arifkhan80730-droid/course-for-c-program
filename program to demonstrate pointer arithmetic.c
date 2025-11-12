#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int *ptr = arr;

    // Initial pointer position
    printf("ptr = %p, *ptr = %d\n", (void *)ptr, *ptr);

    // Move pointer to next element (adds sizeof(int))
    ptr++;
    printf("After ptr++: ptr = %p, *ptr = %d\n", (void *)ptr, *ptr);

    // Move pointer 2 steps ahead
    ptr += 2;
    printf("After ptr += 2: ptr = %p, *ptr = %d\n", (void *)ptr, *ptr);

    return 0;
}
