#include <stdio.h>

int main(){

    //continue = skips the rest of the code, forces the next interation
    //break = breaks out of the loop, kind of a switch
    for (int i=1; i<=20; i++){
        if (i==13){
            continue;
        }
        printf("\n%d",i);
    }
    //in that case the loop will just skip the 13 and continue to execute the rest of the code


    for (int i=1; i<=20; i++){
        if (i==13){
            break;
        }
        printf("\n%d",i);
    } 
    // in this case however the code will break out of the for loop if it is 13
    return 0;   

}