#include <stdio.h>

main(){
	int val,rem,rev = 0;
	
	printf("Enter a value : ");
	scanf("%d",&val);
	
	while (val>0){
		rem = val%10;
		rev = (rev*10)+rem;
		val = val/10;
	}
	
	printf("The reverse of this number is : %d",rev); 
}
