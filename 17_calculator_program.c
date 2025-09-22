#include <stdio.h>
int main (){

    char opt;
    double num1;
    double num2;
    double result;
    printf("\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\nEnter your choice: ");
    scanf("%c",&opt);

    if(opt =='1'){
        printf("Enter the first number: ");
        scanf("%lf",&num1);
        printf("Enter the second number: ");
        scanf("%lf",&num2);
        result = num1 + num2;
        printf("The result is %.2lf",result);
    }
    else if(opt =='2'){
        printf("Enter the first number: ");
        scanf("%lf",&num1);
        printf("Enter the second number: ");
        scanf("%lf",&num2);
        result = num1 - num2;
        printf("The result is %.2lf",result);
    }
    else if(opt =='3'){
        printf("Enter the first number: ");
        scanf("%lf",&num1);
        printf("Enter the second number: ");
        scanf("%lf",&num2);
        result = num1 * num2;
        printf("The result is %.2lf",result);
    }
    else if(opt =='4'){
        printf("Enter the first number: ");
        scanf("%lf",&num1);
        printf("Enter the second number: ");
        scanf("%lf",&num2);
        result = num1 / num2;
        printf("The result is %.2lf",result);
    }
    else{
        printf("Invalid option, Please try again");
    }
    return 0;
}