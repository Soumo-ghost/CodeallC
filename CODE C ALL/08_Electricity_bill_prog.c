//WAP in C to calculate electricity bill components of unit used and total amount using previous unit, Current unit Rate 
#include<stdio.h>
int main()
{
    int preval, currval, rate;
    printf("\tEnter previous Unit");
    scanf("%d",&preval);
    printf("\n\tEnter Current valur of Elec unit");
    scanf("%d",&currval);
    printf("\n\tEnter Per Unit Rate");
    scanf("%d",&rate);
    int unit=currval-preval;
    printf("\n\tTotal Electricity Used %d Unit",unit);
    int total=unit*rate;
    printf("\n\tYour total Electricity Bill is %d RS",total);

    return 0;
}