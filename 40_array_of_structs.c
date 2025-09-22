#include <stdio.h>
#include <string.h>

struct Student{
        char name[25];
        float gpa;
    };

int main ()
{
    struct Student student1={"Spongebob", 3.25};
    struct Student student2={"Sayeed", 3.75};
    struct Student student3={"farhan", 3.50};
    struct Student student4={"wolvie", 3.95};

    struct Student students[]={student1,student2,student3,student4};

    for (int i=0; i<sizeof(students)/sizeof(students[0]); i++)
        {
            printf("%10s\t", students[i].name);
            printf("%.2f\n", students[i].gpa);
        }
    

    return 0;
}