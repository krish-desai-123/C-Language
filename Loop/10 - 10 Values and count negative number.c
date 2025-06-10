#include <stdio.h>

main(){
	int i = 1,val,count = 0;
	
	while (i <= 10){
		printf("Enter a Value : ");
		scanf("%d",&val);
		i++;
		if  (val < 0){
			count = count + 1;
		}
	}
	printf("The total count of negative numbers are : %d",count);
	
}