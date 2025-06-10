#include <stdio.h>

void cubeElements(int *ptr, int rows, int cols) {
    int i, j;
    printf("\nCubes of all elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            int val = *(ptr + i * cols + j);
            printf("%d ", val * val * val);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("\nEnter elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    cubeElements(&arr[0][0], rows, cols);

    return 0;
}
