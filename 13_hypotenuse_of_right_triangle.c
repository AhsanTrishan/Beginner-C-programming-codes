#include <stdio.h>
#include <math.h>

int main (){

    double A;
    double B;
    double C;

    printf("Enter the side A: ");
    scanf("%lf", &A);
    printf("Enter the side B: ");
    scanf("%lf", &B);

    C = sqrt(pow(A,2)+ pow(B,2));
    
    printf("The hypotenuse C is %.2lf", C);

    return 0;

}