//WAP in c input 5 no and calculate Avarage
#include<stdio.h>
int main()
{
    int a, b, c, d, e;
    int ava1;
    printf("Enter The No to calculate the Avarage");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    ava1= (a+b+c+d+e);
    float avg = ava1/5;
    printf("The Avarage of No is %f", avg);
    return 0;
}