#include <stdio.h>
void birthday(char name[], int age); //function prototype ensures that there is correct amount of arguements when invoking a function basically ami niche age na dile error ashbe

int main ()
{
    birthday("Trishan", 43);
    return 0;
}

void birthday(char name[], int age)
{
    printf("\nHappy birthday %s!!",name);
    printf("\nYou are %d years old",age);
}