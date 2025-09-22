#include <stdio.h>
#include <ctype.h>

int main(){
    char questions[][100] ={"1)Who was the strongest Demigod in The Lands Between?",
                            "2)Where do you fight Commander Niall?",
                            "3)Which weapon type primarily scales with Dexterity?",
                            "4)Who is the Queen of the Full Moon?",
                            "5)Who is the first mandatory boss that players need to fight in Elden Ring?"};
    char options[][100] = { "A. Malenia","B. Radahn", "C. Mohg", "D. Morgott",
                            "A. Mountaintops of the giant", "B. Altus Plateau", "C. Liurnia of the lakes", "D. Caelid",
                            "A. Colossal Weapons", "B. Katanas", "C. Staffs", "D. Greatspears",
                            "A. Ranni", "B. Malenia", "C. Marika", "D. Rennala",
                            "A. Godrick the Grafted", "B. Agheel", "C. Margit, The Fell Omen", "D. Tree Sentinel"}; 
    
    char answers[5]= {'B', 'A', 'B', 'D', 'C'};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score =0;

    for (int i=0; i<numberOfQuestions ;i++){
        printf("********************************\n");
        printf("%s\n", questions[i]);
        printf("********************************\n");

        for (int j= (i*4); j< (i*4)+4; j++){
            printf("%s\n", options[j]);
            
        }
        scanf("%c", &guess);
        getchar(); //to remove \n from input buffer
        guess = toupper(guess);
        if (guess == answers[i]){
                printf("Correct!\n");
                score++;
            }
            else {
                printf("Incorrect\n");
            }
    }
    printf("*****THE FINAL RESULT*****\n");
    printf("Your score is %d/%d", score, numberOfQuestions);


    return 0;
}