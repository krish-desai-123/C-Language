#include<stdio.h>
 main(){
       int decimal,rem=0,binary=0,multiplier=1;
       
       
       printf("enter value:-");
       scanf("%d",&decimal);
       
       
       while(decimal>0){
       	rem=decimal%2;
       	binary=binary+(rem*multiplier);
       	multiplier=multiplier*10;
       	decimal=decimal/2;
	   }
	   
	   printf("binary:%d\n",binary);

       
		
	   }
	   