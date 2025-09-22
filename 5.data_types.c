#include <stdio.h>
#include <stdbool.h>
int main()
{   
    double x = 3.141565754557932; //16 bits of numbers %lf
    float y = 3.1445456; //8bits of numbers %f
    char a = 'n'; //single character %c
    char b[]= "NIGGA"; //array of characters or string %s
    bool e = true; // true or false %d
    int f = 134; // %d
    unsigned int u = 534534543 ; //%u
    char z = 100; // (-128 to +127) 1byte ..  %d dile 100 %c dile corresponding ASCII table theke sign
    unsigned char g = 245; // (0 to +255) 1byte... %d or %c
    short int h =32767; //2 bytes (-32768 to +32768) %d
    unsigned short int j = 65454; //2 bytes (o to +65535) %d
    long long int o =45645345634345; //9 quintillion (neg to pos) %lld
    unsigned long long int p =53454; // 0 to 18 quin %llu
    

    return 0;
}