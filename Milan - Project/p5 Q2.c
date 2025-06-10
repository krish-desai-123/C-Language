#include <stdio.h>

int main() {
    int arr[3][3]={
        {2, 7, 1},
        {3, 5, 4},
        {8, 9, 6}
    };
    int max=arr[0][0],i,j; 
    

    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) {
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }

    printf("The largest element in the 2D array is: %d\n", max);

    
}