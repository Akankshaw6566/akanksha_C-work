// using array

#include<stdio.h>
void main(){
    int a[5];
    printf("enter the element of array");
      int i;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=4;i>=0;i--){
        printf("%d",a[i]);
    }
}