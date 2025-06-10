#include <stdio.h>
#include <math.h>

int main() {
    int i, num, count, sum, temp, rem;

    

    for (i=1;i<=1000;i++) {
        num=i;
        count=0;
       
        temp=num;
        while (temp!=0) {
            temp=temp/10;
            count++;
        }
       
        sum=0;
        temp=num;
        while (temp!=0) {
            rem=temp%10;
            sum=sum+pow(rem, count);
            temp=temp/10;
        }
        if (sum==num){
            printf("%d ",num);
        }
    }
    return 0;
}
