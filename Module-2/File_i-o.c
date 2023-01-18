#include<stdio.h>
int main()
{
    char str[20];
    char get[20];
    FILE *fptr;
    printf("Enter your string:");
    scanf("%s",&get);
    fptr=fopen("D:/nidhi batch/software engineering/07nov_Se/module-2/hello.txt","w");
    fprintf(fptr,"%s",get);
    fclose(fptr);
    fptr = fopen("D:/nidhi batch/software engineering/07nov_Se/module-2/hello.txt", "r");
    fscanf(fptr,"%s",&str);
    printf("%s",str);
    fclose(fptr);
}