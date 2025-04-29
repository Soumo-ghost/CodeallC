//WAP in c to input 2 no and swap them using 3rd variable
#include<stdio.h>
int main()
{
    int a, b;
    printf("\tEnter Your no Swap Them");
    scanf("%d %d", &a, &b);
    printf("\n\tYour no is %d %d before Swap", a, b);
    int c= a+b;
    a=c-a;
    b=c-a;
    printf("\n\tYour no is %d %d after swap",a,b);
    return 0;

}