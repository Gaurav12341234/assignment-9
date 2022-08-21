//3. Write a program which takes the day number of a week and displays a
//   unique greeting message for the day.
#include<stdio.h>
int main()
{
    int a;
    printf("enter a day number:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("Sunday is the enjoyment day");
            break;
        case 2:
            printf("Monday is the warm up of the week");
            break;
        case 3:
            printf("In Tuesday get 2 games period ");
            break;
        case 4:
            printf("wednesday is the lord ganpati day");
            break;
        case 5:
            printf("In Thursday wearing clourful dress in school");
            break;
        case 6:
            printf("In friday all friends meet up ");
            break;
        case 7:
            printf(" In saturday we waiting for sunday");
            break;
        default:
            printf("Invalid Day number");
    }
    return 0;
}