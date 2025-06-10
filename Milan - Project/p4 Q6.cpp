#include<stdio.h>
main(){

    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int j = 1; j <= 2 * (rows - i); j++) {
            printf(" ");
        }
        for (int j = i; j >= 1; j--) {
            if (i == 5 && j == 5) {
                continue;
            }
            printf("%d ", j);
        }
        printf("\n");
    }
}