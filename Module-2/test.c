#include<stdio.h>

void main()
{
    char a;

    printf("\nt=tea\nc=coffee\n");
    printf("Enter your choice:");
    scanf("%c",&a);

    if(a == 't' || a == 'c')
    {
        printf("Your choice is out of the menu.....");
    }
    else
    {
        printf("Your choice is:%c",a);
    }
}