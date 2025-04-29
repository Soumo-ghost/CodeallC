//WAP in c to Input 2 no And Swap Them without using 3rd variable 
#include<stdio.h>
int main()
{
    int a, b;
    printf(" \tEnter the no to swap");
    scanf("%d %d", &a, &b);
    printf("\n \tYour no is %d %d before swaping", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n \tYour no is %d %d after Swap", a, b);
    return 0;
}