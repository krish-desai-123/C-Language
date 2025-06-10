#include <stdio.h>

main(){
	int i = 1,odd = 0,even = 0;
	
	while (i <= 20){
		
		if  (i%2==0){
			even = even + i;
		}
		else{
			odd = odd + i;
		}
		i++;
	}
	printf("The sum of odd numbers are :%d\n",odd);
	printf("The sum of even numbers are :%d",even);
}