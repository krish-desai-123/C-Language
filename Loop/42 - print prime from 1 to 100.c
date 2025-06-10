#include<stdio.h>

 main(){
       int i,j,prime;
       for(i=2;i<=100;i++){
       	prime=1;
       	for(j=2;j*j<=i;j++){
       		if(i%j==0){
       			prime=0;
			   }
       		
		   }
       	if(prime){
       		printf("%d\n",i);
		   }
       	
       	
	   }
  
	    	
		}
		   
		
		   
		   