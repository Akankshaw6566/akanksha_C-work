//using pointer

#include<stdio.h>
void main(){
    int a=10;
    int* ptr=&a;
    printf("%d\n",a);
    printf("%u\n",&a);
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
}