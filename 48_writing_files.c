#include <stdio.h>
int main()
{
    //FILE *pF = fopen("48_niggatexting123.txt", "w"); //w for writing ,can use file path also before creating
    /* FILE *pF = fopen("48_niggatexting123.txt", "a"); //w for writing

    fprintf(pF, "\nJamaneer er mare sudi");

    fclose(pF); */
    if(remove("48_niggatexting123.txt") ==0){ //to delete the file
        printf("The File has been deleted successfully");
    }
    else {
        printf("The file does not exist");
    }
    return 0;
}