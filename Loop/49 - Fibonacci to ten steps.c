#include<stdio.h>
 main(){
       int pv=0,cv=1,nv=0,i=1;
       printf("%d\n",pv);
       printf("%d\n",cv);
       
       while(i<=8){
       	nv=pv+cv;
       	printf("%d\n",nv);
       	pv=cv;
       	cv=nv;
       	i++;
	   }

	   }
	   