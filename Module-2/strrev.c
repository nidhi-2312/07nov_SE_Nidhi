#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter the string:");
    scanf("%s",&str);
    printf("Your original string is:%s",str);
    strrev(str);
    printf("\nReversed string is:%s",str
    );
}