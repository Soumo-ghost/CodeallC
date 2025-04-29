//WAP in C to calculate Area of a Circle Given input of Radius
#include<stdio.h>
int main()
{
    float r;
    float pi=3.14;
    printf("\tEnter the redius of circle to calculate area");
    scanf("%f", &r);
    float Area = r*r*pi;
    printf("\tThe Area of Circle of Radius %f is %f",r , Area);
    return 0;
}