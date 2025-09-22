#include <stdio.h>
int main(){
    double const PI = 3.14159;
    double radius;
    double area;
    double circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nThe area of the circle is %.2lf",area);
    printf("\nThe circumference of the circle is %.2lf", circumference);

    return 0;
}