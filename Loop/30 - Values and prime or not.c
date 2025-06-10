#include <stdio.h>

int main(){
	
	int i = 2, val,temp;
	printf("Enter a value : ");
	scanf("%d",&val);
	
	while (i < val){
		if (val%i!=0){
			break;
		}
		i++;	
	}
	if (val == i){
		printf("Prime number");
	}else{
		printf("Not Prime number");
	}
	
}
	
	
	
	
