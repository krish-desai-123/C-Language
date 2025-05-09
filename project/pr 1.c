#include<stdio.h>
main(){
	int a;
	float faranheit;
	
	 printf("enter degree in celcius:-");
       scanf("%d",&a);
       
       faranheit=(1.8*a)+32;
       printf("faranheit:-%f",faranheit);
}