// write a code to checkstrong number in the given range 1 to n

#include<stdio.h>
void main(){
    for(int t=1;t<=50;t++){
        int num=t;
        int sum=0;
        int rem;
        while(num>0){
            rem=num%10;
            int fact=1;
            for(int i=1;i<=rem;i++){
                fact=fact*i;
            }
            sum=sum+fact;
            num=num/10;
        }
        if(sum==t){
            printf("%d\n",t);
        }
    }
}