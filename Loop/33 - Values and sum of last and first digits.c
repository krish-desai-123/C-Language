#include <stdio.h>

int main(){
	
	int val,first,last,sum;
	printf("Enter a value : ");
	scanf("%d",&val);
	last = val%10;
	
	while (val>0){
		first = val%10;
		val = val/10;
	}
	sum = first+last;
	
	printf("The sum of the last and first digits are : %d",sum);
	
}
	
	
	
	
