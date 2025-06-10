#include <stdio.h>

int main() {
    int arr[3][3] = {
        {2, 4, 1},
        {3, 5, 4},
        {8, 2, 6}
    };
    int transpose[3][3],i,j;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            transpose[i][j]=arr[i][j];
           
        }
    }for(i=0;i<3;i++){
        for(j=0;j<3;j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    

    
}