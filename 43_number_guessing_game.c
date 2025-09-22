#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{   
    const int MAX = 100;
    const int MIN = 1;
    int guess;
    int guesses =0;
    //uses current time as a seed
    srand(time(0));
    //generates a random number between MAX & MIN
    int answer = (rand() % MAX) + MIN;
    
    do{
        printf("Enter your guess!: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high! \n");
        }
        else if(guess < answer)
        {
            printf("Too low! \n");
        }
        else{
            printf("Correct!! \n");
        }
        guesses++;

    }while (guess != answer);

    printf("**********************\n");
    printf("The answer is %d\n", answer);
    printf("Your total guesses: %d\n", guesses);
    printf("**********************\n");

    return 0;
}