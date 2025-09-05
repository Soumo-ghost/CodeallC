#include <stdio.h>
int isThree(int n) {
    int a=0;
    for(int i=1; i<n; i++){
        if((n%i)==0){
            a++;
        }
    }
    if(a==2){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){
    int b;
    printf("Enter a No");
    scanf("%d",&b);
    int a=isThree(b);
    printf("%d",a);
    return 0;
}
