#include <stdio.h>

typedef struct {
    int emp_id;
    char name[20];
    float salary;
} employee;

int main() {
    employee e1 = {1001, "kiran", 45000};
    printf("emp id: %d\n", e1.emp_id);
    printf("name: %s\n", e1.name);
    printf("salary: %.2f\n", e1.salary);
    return 0;
}
