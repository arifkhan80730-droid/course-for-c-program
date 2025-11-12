#include <stdio.h>

int main() {
    int mark1, mark2, mark3, total;
    float average, percentage;
    char grade;

    // Input marks
    printf("Enter marks for Subject 1: ");
    scanf("%d", &mark1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &mark2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &mark3);

    // Calculate total, average, and percentage
    total = mark1 + mark2 + mark3;
    average = total / 3.0;
    percentage = (total / 300.0) * 100;

    // Check pass/fail based on individual subject marks
    if (mark1 < 50 || mark2 < 50 || mark3 < 50) {
        printf("\nResult: FAIL\n");
        grade = 'F';
    } else {
        printf("\nResult: PASS\n");

        // Assign grade based on percentage
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else
            grade = 'D';
    }

    // Display results
    printf("Marks: %d, %d, %d\n", mark1, mark2, mark3);
    printf("Total Marks: %d out of 300\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
