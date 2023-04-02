#include <stdio.h>
int main()
{
    char name[15] = "Farm House";
    char size = 'M';
    int personItServes = 2;
    float retailPrice = 365.8;
    printf("%s", name);
    printf("\n");
    printf("%c", size);
    printf("\n");
    printf("%d", personItServes);
    printf("\n");
    printf("%.1f", retailPrice);
    printf("\n");
    printf("Yay! You ordered a %s Pizza of Size %c that serves %d.\nplease pay"
     "Rs. %.1f to the delivery Person", name, size, personItServes, retailPrice);

    return 0;
}