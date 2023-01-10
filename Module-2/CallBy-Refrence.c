#include<stdio.h>
int* ref(int *ptr)
{
    return ptr;
    
}
int main()
{
    int a=10;
    printf("\nAddress of the function is:%d",ref(&a));
    return 0;
}
