#include <stdio.h>

main(){
	int i = 1;
	while (i <=20){
		if (i % 2 != 0){
			printf("%d\n",i);
		}
		i++;
	}
}