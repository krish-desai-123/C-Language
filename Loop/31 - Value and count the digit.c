#include <stdio.h>

int main(){
	
	int val,count;
	printf("Enter a value : ");
	scanf("%d",&val);
	
	while (val>0){
		count += 1;
		val = val/10;
	}
	printf("The count of the digits are : %d",count);
	
}
	
	
	
	
