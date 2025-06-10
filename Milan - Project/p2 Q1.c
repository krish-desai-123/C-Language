#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter the score (0-100): ");
    scanf("%d", &score);
    
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a value between 0 and 100.\n");
    }
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    printf("Grade: %c\n", grade);

}
