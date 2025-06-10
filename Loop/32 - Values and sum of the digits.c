#include <stdio.h>

int main(){
	
	int val,count,sum = 0,a;
	printf("Enter a value : ");
	scanf("%d",&val);
	
	while (val>0){

		a = val%10;
		sum += a;
		val=val/10;
	}
	printf("The sum of the digits are : %d",sum);
	
}
	
	
	
	
