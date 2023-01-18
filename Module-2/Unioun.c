#include<stdio.h>
union Temp
{
    int id;
    char nm[20];
};
int main()
{
    union Temp un;
    printf("Enter your id:");
    scanf("%d",&un.id);
    printf("Enter your name:");
    scanf("%s",&un.nm);
    printf("\nYour name is:%s",un.nm);
    printf("\nYour id is:%d",un.id);
}