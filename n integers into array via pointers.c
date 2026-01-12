#include <stdio.h>

// Input array using pointer arithmetic
void input_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

// Display array using pointer arithmetic
void display_array(int *arr, int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// Sum array elements using pointer arithmetic
int sumArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// Count positive elements using pointer arithmetic
int countPos(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > 0) {
            count++;
        }
    }
    return count;
}

// Count negative elements using pointer arithmetic
int countNeg(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[100], n;

    // Input size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input and display
    input_array(arr, n);
    display_array(arr, n);

    // Calculations
    int sum = sumArray(arr, n);
    int pos_c = countPos(arr, n);
    int neg_c = countNeg(arr, n);

    // Output results
    printf("Sum of all elements: %d\n", sum);
    printf("Number of positive elements: %d\n", pos_c);
    printf("Number of negative elements: %d\n", neg_c);

    return 0;
}
