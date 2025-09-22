#include <stdio.h>
int main(){
    char operator;
    double number1;
    double number2;
    double result;

    printf("\nEnter any operator (+,-,/,*): ");
    scanf("%c", &operator);
    printf("\nEnter number 1: ");
    scanf("%lf",&number1);
    printf("\nEnter number 2: ");
    scanf("%lf",&number2);
    switch(operator){
        case '+':
            result = number1 +  number2;
            printf("The result is %.2lf",result);
            break;
        case '-':
            result = number1 -  number2;
            printf("The result is %.2lf",result);
            break;    
        case '*':
            result = number1 *  number2;
            printf("The result is %.2lf",result);
            break;
        case '/':
            result = number1 /  number2;
            printf("The result is %.2lf",result);
            break;
        default:
            printf("Enter a valid operator");
            break;
    }
    return 0;
}   