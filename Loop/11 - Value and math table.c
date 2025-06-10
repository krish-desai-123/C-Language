#include <stdio.h>

main(){
	int i ,val,tab;
	
	printf("Enter a Value : ");
	scanf("%d",&val);
	
	for (i=1;i<=10;i++){
		tab = val * i;
		printf("%d * %d = %d\n",val,i,tab);
	}
	
	
}