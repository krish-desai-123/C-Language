#include<stdio.h>
main(){
	
	int i=1,num;
	
	printf("enter the number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		if(i*i==num){
			printf("square root is:%d",i);
			break;
		}
	}

	
}