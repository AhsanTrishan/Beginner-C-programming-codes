#include <stdio.h>
int main()
{
    int x;//declaration je x ekta varaiable
    x = 5; //initialization basically store kortesi int hishebe 5 re x e 

    // we can also type int x =5; which is basically initialization and declaration at the same time
    int y = 10;

    int age = 15;//integer
    float nunu = 5.1; //floating point number
    char grades = 'c'; //single character
    char name[]= "Wolvie"; //array of characters

    printf("Hello %s you know something? \n", name);
    printf("I like anyone under %d years old \n", age);
    printf("My avg grade is %c \n",grades);
    printf("My cock is %f inches",nunu);

    return 0;
}