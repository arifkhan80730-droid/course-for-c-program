#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);

    int result = strcmp(s1, s2);

    if(result == 0){
        printf("Strings are equal!\n");
    }
    else if(result > 0){
        printf("First string is greater!\n");
    }
    else{
        printf("First string is smaller!\n");
    }

    return 0;
}
