#include<stdio.h>
int main()
{
    int ch;
    int a, b, ans;
    printf("enter the 2 no:");
    scanf("%d%d",&a,&b);
    printf("\n1.Addition\n2.substraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        ans = a+b;
        printf("\nAddition is:%d",ans);
        break;
    
    case 2:
        ans = a-b;
        printf("\nSubstraction is:%d",ans);
        break;

    case 3:
        ans = a*b;
        printf("\nMultiplication is:%d",ans);
        break;

    case 4:
        ans = a/b;
        printf("\nDivistion is:%d",ans);
        break;

    default:
        printf("\nEnter the valid choice.............");
        break;
    }
    return 0;
}