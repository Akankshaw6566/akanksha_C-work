#include<stdio.h>
void prime(int*);
void main(){
    int a[6];
    // intput 6 numbers
    for(int i=0; i<6; i++){
        scanf("%d",&a[i]);
    }
    prime(a);

    // check prime number or not

}
void prime(int a[]){
    for(int i=0; i<6; i++){
        int num=a[i];
        int flag=0;
        if(num<2){
            flag=1;
        }
        else{
            for(int j=2; j<num; j++){
                if(num%j==0){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            printf("%d",num);
        }
    }
}