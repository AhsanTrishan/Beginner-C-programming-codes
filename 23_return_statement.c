#include <stdio.h>
double square(double x){
    return x*x;
}
int main ()
{
    double x = square(4);
    printf("%.1lf", x);
    return 0;
}