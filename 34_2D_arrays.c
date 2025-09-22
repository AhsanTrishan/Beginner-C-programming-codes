#include <stdio.h>

int main()
{   
    //2D arrays= an array ,where each element is an entire array... useful if you need matrix ,grid or table of data   
    /*int numbers[2][3] ={
                        {1,2,3},
                        {4,5,6}
                        };
    */
    int numbers[3][3];
    numbers [0][0]=1;
    numbers [0][1]=2;
    numbers [0][2]=3;
    numbers [1][0]=4;
    numbers [1][1]=5;
    numbers [1][2]=6;
    numbers [2][0]=7;
    numbers [2][1]=8;
    numbers [2][2]=9;
    
    int rows= sizeof(numbers)/sizeof(numbers[0]); // pura 9 element er size er just ekta row er size diya bhag
    int columns=sizeof(numbers[0])/sizeof(numbers[0][0]);// just ekta row er size re ekta element diya bhag
    printf("rows: %d\n", rows);
    printf("Columns: %d\n", columns);

    for (int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("%d ",numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}