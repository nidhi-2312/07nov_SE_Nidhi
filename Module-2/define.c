// WAP to get area of the circle
#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    float area;
    printf("Enter the radious of the circle:");
    scanf("%d",&r);
    area = pi * r * r;
    printf("\vArea of the circle is:%f",area);
}