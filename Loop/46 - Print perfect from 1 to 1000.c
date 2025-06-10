#include<stdio.h>
 main(){
       int i,fact=0,j;
       
       
      
       for(i=1;i<=1000;i++){
       	fact=0;
       	
       	for(j=1;j<i;j++){
		   
       	
       	 if(i%j==0){
       	 	fact=fact+j;
			}
				
			}	if(fact==i){
				printf("%d ",i);
			}
		}
		
			}
			
		
		
	   
	   