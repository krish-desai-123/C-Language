#include <stdio.h>


float findAverage(int a[10][10], int rows, int cols) {
    int sum = 0, count = 0;

   
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum = sum + a[i][j];
            count++; 
        }
    }

    return (float)sum / count;
}

int main() {
    int a[10][10];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter values in array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter value for [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    
    float avg = findAverage(a, rows, cols);

    printf("Average of all elements = %.2f\n", avg);

    return 0;
}
