#include <stdio.h>
int main(){
    //array = can store many values of the same data type

    double prices[15] ={3,4,5,6}; //i can declare maximum number of elements and also add some in the beginning
    prices[4]=7;// ican add elements later also if there is size
    prices[5]=8;

    printf("%.2lf", prices[3]);

    return 0;
}