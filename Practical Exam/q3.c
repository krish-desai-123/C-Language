#include <stdio.h>


void printOddElements(int arr[], int size) {
    printf("Odd elements in the array are:\n");
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[100], size;

   
    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printOddElements(arr, size);

    return 0;
}
