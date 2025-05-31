#include<stdio.h>
int Sum(int*);
void main(){
    int a[7];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    int k=Sum(a);
    printf("%d",k);
}
int Sum(int*a){
    int sum=0;
    for(int i=0;i<6;i++){
        sum=sum+a[i];
    }
    return sum;
}