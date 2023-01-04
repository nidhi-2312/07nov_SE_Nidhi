#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    printf("Enter your srtring:");
    scanf("%s",&str1);
    strcpy(str2,str1);
    printf("\nYour copy string is:%s",str2);
}