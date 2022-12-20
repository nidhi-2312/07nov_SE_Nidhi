#include<stdio.h>
void main()
{
    int no;
    printf("Enter the no to check wether it's positive or not:");
    scanf("%d",&no);
    if (no > 0)
    {
        printf("\nNo is positive.");
    }
    else if (no == 0)
    {
        printf("\nNo is zero.");
    }
    
    else
    {
        printf("\nNo is negative.");
    }
    
}