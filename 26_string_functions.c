#include <stdio.h>
#include <string.h> //string functions are stored in this library

int main()
{
    char name[] = "Trishan";
    char name2[] = "wolvie";
    printf("The length of the name is %d\n", strlen(name)); //strlen() function returns the length of the string
    printf("The size of the name is %d\n", sizeof(name)); //sizeof() function returns the size of the string
    printf("The name in uppercase is %s\n", strupr(name)); //strupr() function converts the string to uppercase
    printf("The name in lowercase is %s\n", strlwr(name)); //strlwr() function converts the string to lowercase
    strcat(name, name2); // strcat() function concatenates two strings
    printf("The concatenated name is %s\n", name);
    strcpy(name, name2);
    printf("The name is %s\n", name);
    // strcpy() function copies the second string to the first string
    strset(name, 'a');
    printf("The name is %s\n", name);
    // strset() function sets all the characters in the string to the specified character
    strcmp(name, name2);
    if (strcmp(name, name2) == 0)
    {
        printf("The strings are equal\n");
    }
    else
    {
        printf("The strings are not equal\n");
    }
    // strcmp() function compares two strings
    return 0;
}