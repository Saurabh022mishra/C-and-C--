#include    <stdio.h>
int main(){
    //Arithmatic operators: +, -, *, /, %
    //Precedence of operators: *, /, % > +, -
    //Associativity of operators: Left to Right
    int result=3+1-7*(5%3)/2;
    printf("The result is %d\n",result);
    return 0;
}