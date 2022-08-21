//1. Write a program which takes the month number as an input and display
//   number of days in that month.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Month number:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
               printf("31 days");
               break;
        case 3:
               printf("31 days");
               break;
        case 5:
               printf("31 days");
               break;
        case 7:
               printf("31 days");
               break;
        case 8:
               printf("31 days");
               break;
        case 10:
               printf("31 days");
               break;
        case 12:
               printf("31 days");
               break;
        case 2:
                printf("28 or 29 days");
                break;
        case 4:
               printf("30 days");
               break;
        case 6:
               printf("30 days");
               break;
        case 9:
               printf("30 days");
               break;
        case 11:
               printf("30 days");
               break;
        default:
                printf("Invalid month number");
    }
    return 0;
}