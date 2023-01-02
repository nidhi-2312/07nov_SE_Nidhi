#include<stdio.h>
void main()
{
    int count;
    printf("Enter the size of array:");
    scanf("%d",&count);
    int no[count];
    int i;
    for ( i = 0; i < count; i++)
    {
        printf("\nEnter the value of no[%d]:",i+1);
        scanf("%d",&no[i]);
    }
    
    for ( i = 0; i < count; i++)
    {
        printf("\nValue of 1st index is:%d",no[i]);
    }
    
}