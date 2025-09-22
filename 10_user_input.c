#include <stdio.h>
int main (){
    char name[25];
    int age;

    printf("Enter your name: ");
    //scanf("%s", name);
    fgets(name, 25, stdin); //fgets is used to take input with spaces

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your name is %s\n", name);
    printf("Your age is %d\n", age);
    return 0;
}