#include <stdio.h>

void printDigitInWords(int digit) {
    switch(digit) {
        case 0:
        	 printf("Zero ");
			break;
		
		case 1:
        	 printf("one ");
			break;
		 
		case 2:
        	 printf("two ");
			break;
		 
		case 3:
        	 printf("three ");
			break;
		 
		case 4:
        	 printf("four ");
			break;
		 
		case 5:
        	 printf("five ");
			break;
		 
		case 6:
        	 printf("six ");
			break;
		 
		case 7:
        	 printf("seven ");
			break;
		 
		case 8:
        	 printf("eight ");
			break;
		 
		case 9:
        	 printf("nine ");
			break;
		
		} 

    }


int main(){
    int num,rev=0,digit,temp;

    printf("Enter an number: ");
    scanf("%d",&num);

     temp= num;
    if (temp==0) {
        printf("Zero\n");
        
    }else if(temp==10){
    	printf("ten\n");
	}
     while(temp!=0){
	   digit=temp%10;
	   rev=rev*10+digit;
	   temp=temp/10;
       	}
       	
       	
     while(rev!= 0) {
        digit = rev% 10;
        printDigitInWords(digit);
        rev=rev/ 10;
    }
    

    
   

  
   
    }
