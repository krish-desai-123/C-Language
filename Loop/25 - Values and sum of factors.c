#include <stdio.h>

main(){
	
	int i = 1, val,sum = 0;
	printf("Enter a value : ");
	scanf("%d",&val);
 
	while (i <= val){
		if (val % i == 0){
			sum += i;
		}
		i++;
	}
	printf("The sum of all factors of this number %d : %d\n",val,sum);
	
}