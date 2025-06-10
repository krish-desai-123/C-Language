#include <stdio.h>

main(){
	int i = 1, val;
	
	while (i <= 10){
		printf("Enter a Value : ");
		scanf("%d",&val);
		i++;
		if  (val > 0){
			printf("This value is positive : %d\n",val);
		}
	}
	
	
}