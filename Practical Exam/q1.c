#include <stdio.h>

int main() {
    int marks[5], i, total = 0;
    float average;
    char grade;

    printf("Enter marks for 5 subjects (out of 100):\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = total / 5.0;

    
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else if (average >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("\nTotal Marks = %d", total);
    printf("\nAverage Marks = %.2f", average);
    printf("\nGrade = %c\n", grade);

    return 0;
}
