#include<stdio.h>
 main(){
       int i,a,fact=1,sum=0,digit,temp,j;
       
	   
	   for(i=1;i<=100;i++){
       	temp=i;
       	sum=0;
       
       	
       	while(temp>0){
       		digit=temp%10;
       		while(digit>0){
       			fact=fact*digit;
       			digit--;
			   }sum=sum+fact;
			   temp=temp/10;
			   fact=1;
       
			   }
			   temp=i;
			    if(sum==temp){
	   	       printf("%d\n",temp);
		   
		   
	   
			  
		   }
		  }
	   }
	   
       
       
		
	   