#include<stdio.h>
int main()
{
    int a=2;
    printf("%d",++a + a++ + ++a);
    printf(" %d  ", sizeof(a));
    return 0;
}