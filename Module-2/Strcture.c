#include<stdio.h>
struct Demo
{
    int id;
    char nm[20];
}st;
int main()
{
    // struct Demo d1;
    printf("Enter your id:");
    scanf("%d",&st.id);
    printf("Enter your name:");
    scanf("%s",&st.nm);
    printf("Your id is:%d and your name is:%s",st.id,st.nm);
}