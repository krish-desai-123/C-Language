#include <stdio.h>

main(){
	int i,sq,j = 0;
	for (i=1;i<=10;i++){
		sq = i * i - j;
		j++;
		printf("%d\n",sq);
	}
}