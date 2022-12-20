#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a, b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if (a > b)
    {   
        if (a > c)
        {
            printf("A is max.");
        }
        else
        {
            printf("C is max.");
        }    
    }
    else
    {
        if (b > c)
        {
            printf("B is max.");
        }
        else
        {
            printf("\nC is max.");
        }
    }
}