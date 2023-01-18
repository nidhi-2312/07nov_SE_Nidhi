#include<stdio.h>
union Student
{
    int id; 
    char nm[20];
};
int main()
{
    union Student st[10];
    int i;
    for(i=0; i<3; i++)
    {
        printf("Enter your id:");
        scanf("%d",&st[i].id);
        printf("Enter your name:");
        scanf("%s",&st[i].nm);

    }
    for(i = 0; i < 3; i++)
    {
        printf("\nYour id is:%d",st[i].id);
        printf("\nYour name is:%s",st[i].nm);
    }
}