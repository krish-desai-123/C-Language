#include <stdio.h>

main(){
	int i = 1,sum = 0;
	
	while (i <= 10){
		sum = sum + i;
		i++;
	}
	printf("Sum of 1 to 10 = %d",sum);
}