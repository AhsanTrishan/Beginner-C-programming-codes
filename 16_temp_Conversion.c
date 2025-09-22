#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nEnter the unit of measurement(C/F): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\nEnter the temp in celcius: ");
        scanf("%f", &temp);
        temp = ((temp * 9/5) + 32);
        printf("The temperature in Ferenheit is: %.1f F",temp);
    }
    else if (unit == 'F'){
        printf("\nEnter the temp in ferenheit: ");
        scanf("%f", &temp);
        temp = ((temp -32) * 5/9);
        printf("The temperature in celcius is: %.1f C",temp);
    }
    else{
        printf("Not a valid unit of measurement");
    }
    return 0;
}