#include <stdio.h>

main(){
	int i,val,rem,temp,count=0,arm = 0,temp1;
	
	printf("Enter a value : ");
	scanf("%d",&val);
	temp = val;
	temp1 =val;
	while (val>0){
		count += 1;
		val = val/10;
	}
	
	while (temp>0){
		rem = temp%10;
		int power = 1;
		for (i=0;i<count;i++){
			power *= rem;
		}
		arm += power;
		temp/=10;
	}
	if (arm == temp1){
		printf("The value is armstrong number.");
	}else{
		printf("The value is not armstrong number.");
	}
	
	
}