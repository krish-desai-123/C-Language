#include <stdio.h>

int main(){
	
	int val,first,last,temp,count=1,sf,sl,md;
	printf("Enter a value : ");
	scanf("%d",&val);
	last = val%10;
	temp = val;
	while (temp>0){
		count *= 10;
		first = val%10;
		val = val/10;	
	}
	sf = (val % count) - last + first;
	sf = sf - last + first;
	
	sl = sf + (last*count);
	
	printf("The sum of the last and first digits are : %d",sl);
	
}
	
	
	
	
