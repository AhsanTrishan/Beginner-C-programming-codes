#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //pseudo random numbers = A set of values or elements that are statistically random
    //dont use them in any sort of cryptographic security
    
    srand(time(0));
    int number1= rand() % 6; //basically means 0-5 random num 
    int number2= (rand() % 6)+ 1; //basically means 1-6 
    int number3= (rand() % 6)+ 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}