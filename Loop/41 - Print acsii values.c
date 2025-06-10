#include<stdio.h>
main(){
	char ch='a',CH="A";
	do{
		printf("%c = %d\n",ch,ch);
		ch++;
		printf("%c = %d\n",CH,CH);
		
		CH++;
	}while(ch<='z'&& CH<='Z');

}