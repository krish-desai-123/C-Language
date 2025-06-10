#include <stdio.h>

main(){
	int val,rem,rev = 0,temp;
	
	printf("Enter a value : ");
	scanf("%d",&val);
	temp = val;
	while (val>0){
		rem = val%10;
		rev = (rev*10)+rem;
		val = val/10;
	}
	if (temp==rev){
		printf("This is palindrome number.");
	}else{
		printf("This is not palindrome number.");
	}
	
	
}
