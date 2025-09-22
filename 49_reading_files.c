#include <stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\trish\\OneDrive\\Documents\\googoogaga.txt", "r");
    char buffer [255];

    if(pF == NULL){
        printf("UNABLE TO LOCATE FILE");
    }

    else{
        while(fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer); 
        }
    }

    
    fclose(pF);

    return 0;
}