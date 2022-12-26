#include<stdio.h>
void main()
{
    int i,j,k,space = 5;
    for ( i = 1; i <= 5; i++)
    {
        for ( k = 0; k < space; k++)
        {
            printf(" ");
        }
        space--;
        for ( j = 1; j <= i; j++)
        {
            printf("%d ",j);

        }
        printf("\n");
    }
    
}


/*
Output1:
     1
    12
   123
  1234
 12345
*/