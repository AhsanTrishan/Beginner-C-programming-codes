#include <stdio.h>

int main() {
    int a = 10;

    a += 5;  // equivalent to a = a + 5
    a -= 3;  // equivalent to a = a - 3
    a *= 2;  // equivalent to a = a * 2
    a /= 4;  // equivalent to a = a / 4
    a %= 3;  // equivalent to a = a % 3

    printf("Result: %d\n", a);

    return 0;
}