#include<stdio.h>
 main(){
       int a,last,first,sum;
       
       
       printf("enter value:-");
       scanf("%d",&a); 
	   
	   last=a%10;
	   first=a;          
        
       while(first>=10){
       	first=first/10;
       	}
		   sum=last+first;
	   printf(" sum of digit:-%d",sum);
	   
}