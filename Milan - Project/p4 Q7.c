#include <stdio.h>

int main() {
    int i,j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (i == 1 || i == 3) {
                printf("*");
            } else if (i == 2 || i == 4 || i == 5) {
                if (j == 1 || j == 5 && i == 2) {
                    printf("*");
                } else if (j == 1 && (i == 4 || i == 5)){
                  printf("*");
                }
                else
                {
                   printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}