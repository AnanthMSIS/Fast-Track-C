#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct stud
{
    int roll_number;
    char name[20];
    int age;
    int marks[4];
};
typedef struct stud student;


int main()
{
    int i,j;
    student s[SIZE];
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter the roll number of student %d :", i+1);
        scanf("%d",&s[i].roll_number);
        printf("\nEnter the name of student %d :", i+1);
        scanf("%s",s[i].name);
        printf("\nEnter the age of student %d :", i+1);
        scanf("%d",&s[i].age);
        for(j = 0; j < 4; j++)
        {
            printf("\nEnter the marks of subject %d of student %d :",j+1,i+1);
            scanf("%d",&s[i].marks[j]);
        }
    }
    //printing the entered values
    for(i = 0; i < SIZE; i++)
    {
        printf("Entered roll number of student %d : %d", i+1, s[i].roll_number);
        printf("\nEntered name of student %d : %s", i+1,s[i].name);
        printf("\nEntered age of student %d : %d", i+1, s[i].age);
        for(j = 0; j < 4; j++)
        {
            printf("\nEntered marks of subject %d of student %d : %d",j+1,i+1,s[i].marks[j]);
        }
    }
}
