#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = && (AND) checks if two conditions are true

    float temp = -5435;
    bool sunny = false;

    if (temp >= 0 && temp <=35 && sunny){
        printf("The weather is good");
    }
    else{
        printf("The weather is bad");
    }
    return 0;
}