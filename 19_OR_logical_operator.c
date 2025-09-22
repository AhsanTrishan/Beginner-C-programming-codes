#include <stdio.h>

int main() {
    int temperature;
    int isSunny;

    printf("Enter the temperature: ");
    scanf("%d", &temperature);

    printf("Is it sunny? (1 for yes, 0 for no): ");
    scanf("%d", &isSunny);

    if (temperature > 20 || isSunny) {
        printf("The weather is good.\n");
    } else {
        printf("The weather is bad.\n");
    }

    return 0;
}