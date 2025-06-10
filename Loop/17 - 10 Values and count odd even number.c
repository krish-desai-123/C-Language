#include <stdio.h>

main(){
	int i = 1,val,odd = 0, even = 0;
	
	while (i <= 10){
		printf("Enter a value ");
		scanf("%d",&val);
		
		if  (val%2==0){
			even = even + 1;
		}else {
			odd = odd + 1;
		}
		
		i++;
	}
	printf("The count of even numbers are :%d\n",even);
	printf("The count of odd numbers are :%d\n",odd);
}