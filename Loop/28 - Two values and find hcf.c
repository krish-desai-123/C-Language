#include <stdio.h>

main(){
	
	int i = 1, val,val1,hcf;
	printf("Enter first value : ");
	scanf("%d",&val);
	
	printf("\nEnter second value : ");
	scanf("%d",&val1);
	
	if (val < val1){
			while (i < val1){
			if (val % i == 0) {
				if (val1 % i == 0 ){
					hcf = i;
				}
			}
			i++;
		}
	}else{
			while (i < val){
			if (val % i == 0) {
				if (val1 % i == 0 ){
					hcf = i;
				}
			}
			i++;
		}
	}
		

	
	printf("\nThe highest common factor of this two number %d and %d is : %d",val,val1,hcf);
	
	
	
}