#include <stdio.h>

main(){
	int i = 1,val;
	
	while (i <= 10){
		printf("Enter a value ");
		scanf("%d",&val);
		
		if  (val%2!=0){
			printf("This is odd number :%d\n",val);
		}
		
		i++;
	}
	
}