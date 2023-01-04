#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int len;
    printf("\nEnter string:");
    scanf("%s",&str);
    len = strlen(str);
    printf("Your string  length is:%d",len);
    return 0;
}