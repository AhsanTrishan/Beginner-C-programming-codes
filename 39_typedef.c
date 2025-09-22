#include <stdio.h>
#include <string.h>
typedef struct
{
    char username[25] ;
    char password[12] ;
    int id;
} User;
int main()
{
    //typedef= reserved keyword that gives a exisiting datatype a nickname
    User user1 ={"Wolvie", "pass1247", 58403848};
    User user2 ={"bayzied", "susasu89", 76543569};

    printf("%s\n", user1.username);
    printf("%s\n", user1.password);
    printf("%d\n",user1.id);
    printf("\n");
    printf("%s\n", user2.username);
    printf("%s\n", user2.password);
    printf("%d\n",user2.id);
    return 0;
}