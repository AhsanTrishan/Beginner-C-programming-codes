#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRaining = true; // true means it is raining
    bool isSnowing = false; // false means it is not snowing

    if (!isRaining && !isSnowing) {
        printf("The weather is not bad.\n");
    } else {
        printf("The weather is bad.\n");
    }

    return 0;
}