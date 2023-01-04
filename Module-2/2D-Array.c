#include<stdio.h>
void main()
{
    int a[3][3];
    int i, j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\nEnter the value of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}