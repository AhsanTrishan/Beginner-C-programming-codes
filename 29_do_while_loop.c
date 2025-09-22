#include <stdio.h>
int main(){

    //while loop= checks a condition then run the code if the condition is true
    //do while loop= run the code once and then checks the condiion

    int number =0;
    int sum=0;

    do{
        printf("\nEnter a number above 0: ");
        scanf("%d",&number);
        if (number >0){
            sum+=number;
        }
    }while(number>0);
    printf("The sum is %d", sum);
    return 0;
}