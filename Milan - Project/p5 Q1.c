#include <stdio.h>

int main(){
    int arr[5] = {2,-4,1,-3,-5},i; 
    
    for(i=0;i<5;i++) {
        if(arr[i]<0) {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");

}
