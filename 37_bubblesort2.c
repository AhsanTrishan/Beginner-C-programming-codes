#include <stdio.h>
void sortArray(char array[], int size)
{
    for (int i=0; i <size -1; i++)
    {
        for (int j=0; j <size -i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array [j+1]= temp;
            }
        }
    }
}
void printArray(char array[], int size)
{
    for(int i=0; i<size ;i++)
    {
        printf("%c ",array[i]);
    }
}
int main()
{
    char array[]={'F','A','H','D','B','G','E','C','I'};
    int size= sizeof(array)/sizeof(array[0]);

    sortArray(array,size);
    printArray(array,size);

    return 0;
}