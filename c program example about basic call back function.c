#include <stdio.h>

// This is the callback function
void sayHello() {
    printf("Hello, Student! You just called me back!\n");
}
void studentWork(void (*callbackFunc)()) {
    printf("Student is doing homework...\n");
    callbackFunc();
}

int main() {
    studentWork(sayHello);
    return 0;
}
