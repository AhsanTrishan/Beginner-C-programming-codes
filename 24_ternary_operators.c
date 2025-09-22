#include <stdio.h>
int findmax(int x, int y){
    /*if (x>y){
        return x;
    }
    else{
        return y;
    }*/
   //instead of using else/if statement we can use ternary operator
   //return (condition) ? value if true : value if false
   return (x>y) ? x : y;
}
int main(){

    int max = findmax(13,4);
    printf("%d",max);
    return 0;

}