//using function

#include<stdio.h>
void area();
void main()
{
    area();
}
void area()
{
    int r=7;
    float pi=3.14;
    float area=pi*r*r;
    printf("area of circle is %f",area);
}