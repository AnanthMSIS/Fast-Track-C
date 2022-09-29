#include <stdio.h>
#include "d6p1b.h"

void display(struct stud s[])
{
    int i, j;
    for(i = 0; i < SIZE; i++)
    {
        printf("\nEnter the roll number of student %d :", i+1);
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

}
void read(struct stud s[])
{
    int i, j;
    for(i = 0; i < SIZE; i++)
    {
        printf("\nEntered roll number of student %d : %d", i+1, s[i].roll_number);
        printf("\nEntered name of student %d : %s", i+1,s[i].name);
        printf("\nEntered age of student %d : %d", i+1, s[i].age);
        for(j = 0; j < 4; j++)
        {
            printf("\nEntered marks of subject %d of student %d : %d",j+1,i+1,s[i].marks[j]);
        }
    }
}
