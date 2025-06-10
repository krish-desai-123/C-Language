#include <stdio.h>

main(){
	
	int i = 1, val;
	printf("Enter a value : ");
	scanf("%d",&val);
 
	while (i <= val){
		if (val % i == 0){
			printf("This number is factor of %d : %d\n",val,i);
		}
		i++;
	}
	
	
}