#include <stdio.h>
void input_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i);
    }
}
void display_array(int *arr, int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int sumArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}
int countPos(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > 0) {
            count++;
        }
    }
    return count;
}
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
    int arr[100],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    input_array(arr, n);
    display_array(arr, n);
    int sum = sumArray(arr, n);
    int pos_c = countPos(arr, n);
    int neg_c = countNeg(arr, n);
    printf("Sum of all elements: %d\n", sum);
    printf("Number of positive elements: %d\n", pos_c);
    printf("Number of negative elements: %d\n", neg_c);

    return 0;
}

