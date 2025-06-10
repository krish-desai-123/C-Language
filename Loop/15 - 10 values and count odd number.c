#include <stdio.h>

main(){
	int i = 1,val,count = 0;
	
	while (i <= 10){
		printf("Enter a value ");
		scanf("%d",&val);
		
		if  (val%2!=0){
			count = count + 1;
		}
		
		i++;
	}
	printf("The count of odd numbers are :%d\n",count);
	
}