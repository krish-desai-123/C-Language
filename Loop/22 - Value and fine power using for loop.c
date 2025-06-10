#include <stdio.h>

main(){
	int i,val,a = 1;
	
	printf("Enter a value ");
	scanf("%d",&val);
	
	for (i=0;i<val;i++){	
			a *= val; 
		}
		printf("The power of number %d is %d",val,a);
	}
