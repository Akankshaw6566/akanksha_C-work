//using function

#include<stdio.h>
void great();
void main()
{
    great();
}
void great()
{
    int a=20;
    int b=90;
    int c=60;
    if(a>b)
    {
        printf("a is greater");
    }
    if(a>c)
    {
        printf("a is greater");
    }
    if(b>c)
    {
        printf("b is greater");
    }
    if(b>a)
    {
        printf("b is greater");
    }

}
