#include <stdio.h>
int main()
{
    //format specifiers % = defines and formats a type of data to be desplayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d =integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align


    float item1 = 5.75;
    printf("The price is $%f\n",item1);
    printf("The price is $%.2f\n",item1);
    printf("The price is $%5.2f\n",item1);

    return 0;

}