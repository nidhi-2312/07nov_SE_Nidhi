#include<stdio.h>
int main()
{
    int expression1, expression2;
    printf("\n-------------------Menu-----------------\n");   
    printf("\n1.Tea\n2.Coffee\n");
    printf("\nEnter your choice:");
    scanf("%d",&expression1);
    switch (expression1)
    {
    case 1:
        printf("\nYour choice is Tea.");
        printf("\nWhich tea you want to prefer:");
        printf("\n\n1.Black tea\n2.Milk Tea\n");
        printf("\nEnter your choice:");
        scanf("%d",&expression2);
        switch (expression2)
        {
        case 1:
            printf("\nYou choice Black Tea.");
            break;
        case 2:
            printf("\nYou choice Milk tea.");

        default:
            printf("\nWhich you want it's not available.");
            break;
        }
        break;
    
    case 2:
        printf("\nYour choice is Coffee.");
        printf("\nWhich coffee you want:");
        printf("\n\n1.Black Coffee\n2.Milk coffee\n");
        printf("\nWhich coffee you want:");
        scanf("%d",&expression2);
        switch (expression2)
        {
        case 1:
            printf("\nYour choice is black coffee.");
            break;
        case 2:
            printf("\nYour choice is milk coffee");
            break;

        default:
            printf("Enter the valid choice............");
            break;
        }
        break;

    default:
        printf("\nYour choice is not valid............");
        break;
    }
    printf("\n------------Thank You for visit-----------");
}