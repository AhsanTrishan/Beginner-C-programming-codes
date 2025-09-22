#include <stdio.h>

int main(){
    // pointer is a variable that stores the memory address of another variable as its value.

    //A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

    int age =23;
    int *pAge = &age;
    printf("The address of age is : %p \n", &age);
    printf("The Value of pAge: %p \n", pAge);

    printf("The size of age is %d bytes \n",sizeof(age));
    printf("The size of pAge is %d bytes \n", sizeof(pAge));

    printf("The value of age: %d \n", age);
    printf("Value at stored address: %d\n", *pAge);

    //int *pAge =NULL;
    //*pAge = &age; good practice to assign NULL if declaring poimters
    return 0;

}