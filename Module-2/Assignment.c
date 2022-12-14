#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    a %= b;
    printf("\nModulo is:%d",a);
    /*
    a += b;
    printf("\nAddition is:%d",a);
    */
    /*
    a -= b;
    printf("\nSubstraction is:%d",a);
    */
    /*
    a *= b;
    printf("\nMultiplication is:%d",a);
    */
    /*
    a /= b;
    printf("\nDivision is:%d",a);
    */
    return 0;
}