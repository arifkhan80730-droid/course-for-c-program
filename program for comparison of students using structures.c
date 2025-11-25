#include <stdio.h>

struct student {
    char name[20];
    int age;
    float total;
};

int main() {
    struct student s[2];
    float avg, sum = 0;
    for (int i = 0; i < 2; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Total Marks: ");
        scanf("%f", &s[i].total);

        sum += s[i].total;

        printf("\n");
    }

    printf("\n----- Student Details -----\n");
    for (int i = 0; i < 2; i++) {
        printf("Name: %s, Age: %d, Total Marks: %.2f\n",
               s[i].name, s[i].age, s[i].total);
    }

    avg = sum / 2;

    printf("\nAverage of Total Marks = %.2f\n", avg);

    return 0;
}
