#include <stdio.h>

main(){
	
	int i = 1, val,sum = 0;
	printf("Enter a value : ");
	scanf("%d",&val);
	while (i < val){
		if (val % i == 0){
			sum = i;
		}
		i++;
	}
	
		printf("This is highest factor of this number : %d",sum);
	
	
}