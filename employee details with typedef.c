#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    int salary;
} Employee;

int main() {
    Employee employees[3];
    int i, max= 0;


    for (i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("\n");
    }

    for (i = 1; i < 3; i++) {
        if (employees[i].salary > employees[max].salary) {
            max = i;
        }
    }
    printf("Employee with highest salary:\n");
    printf("ID: %d\n", employees[max].id);
    printf("Name: %s\n", employees[max].name);
    printf("Salary: %.2f\n", employees[max].salary);

    return 0;
}
