#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int cmp;
    printf("Enter the 1st string:");
    scanf("%s",&str1);
    printf("Enter the second string:");
    scanf("%s",&str2);
    cmp = strcmp(str1, str2);
    if (cmp > 0)
    {
        printf("%s string is max.",str1);
    }
    else if (cmp == 0)
    {
        printf("Both string are equle.");
    }
    else
    {
        printf("%s string is max.",str2);

    }
}