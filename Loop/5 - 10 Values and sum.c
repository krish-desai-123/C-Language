#include <stdio.h>

main(){
	int i = 1,sum = 0, val;
	
	while (i <= 10){
		printf("Enter a Value : ");
		scanf("%d",&val);
		sum = sum + val;
		i++;
	}
	printf("Sum of 10 Values = %d",sum);
}