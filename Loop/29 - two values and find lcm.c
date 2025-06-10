#include <stdio.h>

int main(){
	
	int i, val,val1,lcm,hcf;
	printf("Enter first value : ");
	scanf("%d",&val);
	
	printf("\nEnter second value : ");
	scanf("%d",&val1);
	
	for (i = 1;i<val;i++){
		for (i=1;i<val1;i++){
			if (val%i==0 && val1%i==0){
				hcf = i;
			} 
		}
		
	
	}
	lcm =val*val1/hcf;
	
	printf("\nThe least common multiplier of this two number %d and %d is : %d",val,val1,lcm);
	
	
	
}