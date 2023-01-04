#include<stdio.h>
int main()
{
    // char nm[5]={"abcde"};
    // printf("\nYour name is:%s",nm);
    char nm[20];
    printf("\nEnter your name:");
    scanf("%s",&nm);
    printf("\nYour name is:%c",nm[2]);
}