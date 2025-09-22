#include <stdio.h>
enum Days {sun=1 ,mon=2,tue=3,wed=4,thur=5,fri=6,sat=7};
int main()
{
    //enums =a user defined type of named integer identifiers,
    //       helps to make the code more readable

    enum Days today = sun;
    //printf("%d", today); //enums are not strings but they can be treated as integers
    if (today ==sun || today==sat)
        {
            printf("It's party time");
        }
    else
        {
            printf("I have to work today");
        }
    return 0;
}