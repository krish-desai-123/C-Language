#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter the score (0-100): ");
    scanf("%d", &score);
    
    if(score>=85){
    	printf("grade A. excellent work. you are eligible for the next level");
	} else if(score>=70){
    	printf("grade B. well done. you are eligible for the next level");
	}else if(score>=55){
    	printf("grade C. good job. you are eligible for the next level");
	}else if(score>=40){
    	printf("grade D.you passed but you could do better. you are eligible for the next level");
	}else if(score>=0){
    	printf("grade f.sorry,you failed.please try again next time");
	}



}