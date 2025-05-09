#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter the score (0-100): ");
    scanf("%d", &score);
    
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a value between 0 and 100.\n");
    }
    grade = (score >= 85) ? printf("A.Excellent work!"):
            (score >= 70) ? printf("B.well done") :
            (score >= 55) ? printf("C. good job") :
            (score >= 40) ? printf("D. you passed but you could do better") :printf("F. sorry you failed");

    printf("%c\n", grade);

}