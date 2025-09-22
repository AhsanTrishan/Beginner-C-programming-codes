#include<stdio.h>
int main()
{
    //memory = an array of bytes within the RAM 
    //memory block = a single unit (byte) within memory, used to hold some value
    //memory addresses = the address where the memory block is located

    char X;
    char Y;

    printf("%d\n", sizeof(X));
    printf("%d\n", sizeof(Y));
    printf("%p\n", &X);
    printf("%p\n", &Y);

    return 0;
}