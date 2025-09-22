#include <stdio.h>
void birthday(char name[], int age)
{
    printf("\nHappy birthday %s!!",name);
    printf("\nYou are %d years old",age);
}
int main ()
{
    birthday("Trishan", 23);
    return 0;
}