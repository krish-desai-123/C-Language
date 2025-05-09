#include<stdio.h>
 main(){
       int i,a,digit,count=0;
       
       
       printf("enter value:-");
       scanf("%d",&a);           
        
       while(a>0){
       	
       	
       		count=count+1;
		   
		   a=a/10;
		   }
	   printf("count:-%d",count);
}