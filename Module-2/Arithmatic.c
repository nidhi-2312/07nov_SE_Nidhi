#include<stdio.h>
void main()
{
    int a, b;
    int ans;
    printf("Enter the value of 2 no:");
    scanf("%d%d",&a,&b);
    printf("\nAddition is:%d", a+b);
    ans = a - b;
    printf("\nSubstraction is:%d",ans);
    ans = a * b;
    printf("\nMultiplication is:%d",ans);
    ans = a / b;
    printf("\nDivistion is:%d",ans);
    ans = a % b;
    printf("\nModulo is:%d",ans);
    a++;
    printf("\nAfter increment value of a is:%d",a);
    --b;
    printf("\nAfter decrement value of b is:%d",b);
}