#include <stdio.h>


int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
       
        for (int space = 1; space <= (i - 1) * 3; space++) {
            printf(" ");
        }

        
        for (int num = i; num <= rows; num++) {
            printf("%d ", num);
        }

        
        for (int num = rows - 1; num >= i; num--) {
            printf("%d ", num);
        }

        printf("\n");
    }

    
}

