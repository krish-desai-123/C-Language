#include <stdio.h>

int main(){
	
	int val,sfirst,slast,sum,temp,i,count,temp1;
	printf("Enter a value : ");
	scanf("%d",&val);
	temp = val;
	temp1= val;
	while (val>0){
		count += 1;
		val = val/10;
	}
	for (i=0;i<2;i++){
		slast = temp % 10;
		temp = temp/10;
	}
	for (i=count;i>=2;i--){
		sfirst = temp1 % 10;
		temp1 = temp1/10;
	}
	
	
	sum = sfirst + slast;
	printf("The sum of the last and first digits are : %d",sum);
	
}
	
	
	
	
