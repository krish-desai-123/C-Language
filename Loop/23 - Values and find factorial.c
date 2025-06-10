#include <stdio.h>

main(){
	
	int i = 1, val,fact = 1;
	printf("Enter a value : ");
	scanf("%d",&val);
 
	while (i <= val){
		fact *= i;
		i++;
	}
	
	printf("The factorial of this number is : %d",fact);
}