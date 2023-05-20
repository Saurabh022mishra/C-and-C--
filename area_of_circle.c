#include <stdio.h>
int main(){
    printf("Enter the radius of the circle: ");
    float radius;
    scanf("%f",&radius);
    printf("The area of the circle is %.2f\n", 3.14*radius*radius);
    return 0;
}