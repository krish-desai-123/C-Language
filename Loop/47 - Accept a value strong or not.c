#include<stdio.h>
 main(){
       int i,a,fact=1,sum=0,digit,temp;
       
       
       printf("enter value:-");
       scanf("%d",&a);
       temp=a;
       
       while(a>0){
       	digit=a%10;
       	while(digit>0){
       		fact=fact*digit;
       		digit--;
		   }
		   sum=sum+fact;
		   a=a/10;
		   fact=1;
	   }if(sum==temp){
	   	printf("it is strong");
	   }else{
	   	printf("it is not strong");
	   }
       
       
		
	   }
	   