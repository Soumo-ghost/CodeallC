//WAP in c to Input two no and output its addition substraction multiplication modulas divition
#include<stdio.h>
int main()
    {
        int a, b, add, sub, mul, mod;
        float div;
        printf("Enter the nomber to calculate results");
        scanf("%d %d" , &a, &b);
        add= a+b;
        sub=a-b;
        mul=a*b;
        mod=a%b;
        div=a/b;
        printf("\t The addition is %d \n \t The substation is %d \n \t The multiplication is %d \n \t The divition is %f \n \t The modulus is %d", add, sub, mul, div, mod);
        return 0;
    }
