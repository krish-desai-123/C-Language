#include<stdio.h>
 main(){
       int binary,rem=0,multiplier=1,val=0;
       
       
       printf("enter binary:-");
       scanf("%d",&binary);
       
       
       while(binary>0){
       	rem=binary%2;
       	val=val+(rem*multiplier);
       	multiplier=multiplier*2;
       	binary=binary/10;
	   }
	   
	   printf("decimal:%d\n",val);

       
		
	   }