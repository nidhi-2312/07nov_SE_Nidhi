#include<stdio.h>

long int fecto(int no)
{
    if (no <= 1)
    {
        return 1;
    }
    return no*fecto(no-1);
}

int main()
{
    int no;
    printf("Entre the value of no:");
    scanf("%d",&no);
    printf("%ld",fecto(no));
    return 0;
}
