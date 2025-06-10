#include<stdio.h>
main(){
	int i=1,j=0,k=5;
	for(i=1;i<=5;i++){
		j=4;
		for(j=4;j>=i;j--){
			printf(" ");
			
		}
		
		for(j=k;j<=5;j++){
			printf("%d",j);
			
		}printf("\n");
		
		k--;
		
		
		}
}