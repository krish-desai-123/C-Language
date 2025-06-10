#include <stdio.h>

int main(){
	
	int val,first,last,sum,temp,i;
	printf("Enter a value : ");
	scanf("%d",&val);
	temp = val;
	while (val>0){
		first = val%10;
		val = val/10;
	}
	for (i=0;i<2;i++){
		last = temp % 10;
		temp = temp/10;
	}
	
	sum = first + last;
	printf("The sum of the last and first digits are : %d",sum);
	
}
	
	
	
	
