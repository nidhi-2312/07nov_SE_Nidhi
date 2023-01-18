#include<stdio.h>
struct StData
{
    int id;
    char nm[20];
};
int main()
{
    struct StData st[10];
    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("Enter your id:");
        scanf("%d",&st[i].id);
        printf("Enter your name:");
        scanf("%s",&st[i].nm);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("\nid[%d]:%d name[%d]:%s",i,st[i].id,i,st[i].nm);
    }
}