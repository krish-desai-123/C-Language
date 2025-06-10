#include <stdio.h>


void printEvenElements(int *ptr, int size) {
    printf("Even elements in the array are:\n");
    for (int i = 0; i < size; i++) {
        if (*(ptr + i) % 2 == 0) {
            printf("%d ", *(ptr + i));
        }
    }
    printf("\n");
}

int main() {
    int arr[100], size;

    
    printf("Enter number of elements in the array: ");
    scanf("%d", &size);

    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printEvenElements(arr, size);

    return 0;
}