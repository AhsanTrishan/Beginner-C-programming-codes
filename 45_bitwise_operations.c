#include <stdio.h>

int main(){

    //bitwise operators = special operators used in bit level programming

    // & AND
    // | or
    // ^ XOR
    // << leftshift
    // >> rightshift

    int x=6; // 00000110
    int y=12;// 00001100
    int z=0; // 00000000

    z = x & y; //00000100
    printf("AND = %d\n", z);
    z = x | y; //00001110
    printf("OR = %d\n", z);
    z = x ^ y; //00001010
    printf("XOR = %d\n", z);
    z = x << 1; //00001100 bame 1 ghor
    printf("left shift = %d\n", z);
    z = y >> 2; //00000011 dane 2 ghor
    printf("Right shift = %d\n", z);

    return 0;
} 