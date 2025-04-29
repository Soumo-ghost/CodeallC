//WAP in c To calculate Simple interest given values from user
#include<stdio.h>
int main()
{
    int principal, time, rate;
    float interest;
    printf("Enter The Principal Value, Time , and Rate of Interest");
    scanf("%d %d %d", &principal,&time,&rate);
    interest=(principal*time*rate)/100;
    printf("Your Interest is %f" , interest);
    return 0;
}