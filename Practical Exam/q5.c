#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 5; i++) {
    
        for (j = 0; j < 4 - i; j++) {
            printf(" _ ");  
        }

        
        for (j = 10 - i; j <= 10; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

