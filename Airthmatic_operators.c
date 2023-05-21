#include <stdio.h>
int main(){
    int x=12, y=4,sum,sub,mul,div,mod;
    sum=x+y;
    sub=x-y;
    mul=x*y;
    div=x/y;
    mod=x%y;
    printf("The sum of %d and %d is %d\n",x,y,sum);
    printf("The difference of %d and %d is %d\n",x,y,sub);
    printf("The product of %d and %d is %d\n",x,y,mul);
    printf("The division of %d and %d is %d\n",x,y,div);
    printf("The modulus of %d and %d is %d\n",x,y,mod);
    
    return 0;
}