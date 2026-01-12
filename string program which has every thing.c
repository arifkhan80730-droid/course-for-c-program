#include <stdio.h>
#include <string.h>

int main() {
    char s1[30] = "HELLO";
    char s2[30] = "WORLD";
    int userchoice;

    printf("choose option 1-Length, 2-Concatenate, 3-Compare and Copy: ");
    scanf("%d", &userchoice);

    switch (userchoice) {
    case 1:
    printf("Length of s1: %lu\n", strlen(s1));
    strcat(s1, s2);
    printf("After strcat: %s\n", s1);
    break;
    case 2:
    strcat(s1, s2);
    printf("After concatenation: %s\n", s1);
    strcpy(s1, "HELLO");
    break;
    case 3:
    printf("Comparison result before copy: %d\n", strcmp(s1, s2));
    strcpy(s1, s2);
    printf("After copying s2 into s1: %s\n", s1);
    printf("Comparison result after copy: %d\n", strcmp(s1, s2));
    break;
    default:
    printf("Invalid choice!\n");
    }
    return 0;
}
