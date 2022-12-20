#include<stdio.h>
void main()
{
    int a = 100; 
    int *ptr;
    ptr = &a;
    // printf("\nAddress of the a is:%d",ptr);
    // ptr++;
    // printf("\nValue of a is:%d",ptr);
    printf("Value of a is:%d",*ptr);
    ++*ptr;
    printf("\nValue of a is:%d",a);
    *ptr = 13;
    printf("\nVlau of a is:%d",a);
    
}