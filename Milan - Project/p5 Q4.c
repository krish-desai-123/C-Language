#include <stdio.h>

int main() {
    int arr[3][3] = {
        {2, 7, 1},
        {3, 5, 4},
        {8, 9, 6}
    },i,j,row,col,sumRow,sumCol;
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter the row number (0 to 2) to calculate sums: ");
    scanf("%d", &row);
    printf("Enter the column number (0 to 2) to calculate sums: ");
    scanf("%d", &col);


    for ( j = 0; j < 3; j++) {
        sumRow += arr[row][j];
    }
    for (i = 0; i < 3; i++) {
        sumCol += arr[i][col];
    }
    printf("Sum of elements in row %d = %d\n", row, sumRow);
    printf("Sum of elements in column %d = %d\n", col, sumCol);

}
