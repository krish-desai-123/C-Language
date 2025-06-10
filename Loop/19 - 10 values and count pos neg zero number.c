#include <stdio.h>

main(){
	int i = 1,val,pos = 0, neg = 0, zero = 0;
	
	while (i <= 10){
		printf("Enter a Value : ");
		scanf("%d",&val);
		i++;
		if  (val > 0){
			pos = pos + 1;
		}else if(val < 0){
			neg = neg + 1;
		}else{
			zero = zero + 1;
		}
		
	}
	printf("The total count of positive numbers are : %d\n",pos);
	printf("The total count of negative numbers are : %d\n",neg);
	printf("The total count of zeros are : %d\n",zero);
	
}