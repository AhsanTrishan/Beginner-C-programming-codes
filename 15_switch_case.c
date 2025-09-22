#include <stdio.h>
int main(){
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("A bitch!!");
            break;
        case 'B':
            printf("B pretty good!!");
            break; 
        case 'C':
            printf("C nice!!");
            break;
        case 'D':
            printf("D atleast not F !!");
            break;
        case 'F':
            printf("kys");
            break;
        default:
            printf("WELL WELL WELL TYPE SOMETHING VALID");

    }
    return 0;
}