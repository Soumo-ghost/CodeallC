#include<stdio.h>
int main()
{
    int a, b, c;//1 2 3
    printf("Enter The No to Calculatee Gretest among them \n");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b)//1>2 false sos skip the block
    {
        if(a>c)//
        {
            printf("a is Gretest");
        }
        else
        {
            printf("C is gretest");
        }
    }
    else if(b>c)
    {
        if(b>c)
        {
            printf("b is gretest no");
        }
        else
        {
            printf("c is gretetst");
        }
    }
    else
    {
        printf("C is gretest");
    }
    return 0;
}