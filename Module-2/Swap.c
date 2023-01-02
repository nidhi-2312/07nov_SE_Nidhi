#include<stdio.h>
void main()
{
    int a, b, temp;
    printf("\nEnter the value of no a and b:");
    scanf("%d%d",&a,&b);
    printf("Before value swapping value of a is:%d and b is:%d\n", a, b);
    temp = a;
    b += a;
    a = b - a;
    b = temp;
    printf("After value swapping value of a is:%d and b is:%d", a, b);

}