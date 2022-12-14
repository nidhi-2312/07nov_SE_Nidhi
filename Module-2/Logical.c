#include<stdio.h>

/*
    logicalAnd - &&
    Logical Or - ||
    LogicalNot - !
*/

void main()
{
    int a; int b;
    printf("Enter the value of 2 no:");
    scanf("%d%d",&a,&b);
    if (!( a > 10 && b < 10))
        printf("True");    
    else
        printf("False");
/*a=9;
b=10*/
}