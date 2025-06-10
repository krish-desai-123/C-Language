#include <stdio.h>

int main() {
    int num,sum=0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d",&num);

        sum=sum+num;
        
        
        printf("do you want to enter another number(y/n):");
        scanf("%c",&choice);
        
    }while(choice=='y'||  choice=='Y');
    
    printf("sum of all numbers is :%d",sum);
    
}

