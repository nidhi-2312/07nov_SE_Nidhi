#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age >= 18)
    {
        printf("You are elligible for vote.");
    }
    else
    {
        printf("\nYou are not elligible for vote.");
    }
    
}