#include <stdio.h>
#include <unistd.h>
int main()
{
    char name[20];
    char size;
    int personItServes;
    float retailPrice;
    printf("Enter pizza name: ");
    scanf("%[^\n]%*c",name);// read input until user press enter
    printf("Enter the size of pizza as either 'S','M'or 'L'");
    scanf("%c", &size);
    printf("Enter the number of person it serves: ");
    scanf("%d", &personItServes);
    printf("Enter retail price:");
    scanf("%f", &retailPrice);
    printf("\nGenerating message...\n");
    //usleep(3000000);
    printf("Yay! You ordered a %s Pizza of Size %c that serves %d.\nplease pay"
           "Rs. %.1f to the delivery Person",
           name, size, personItServes, retailPrice); 

    return 0;
}