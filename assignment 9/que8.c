//8. Program to convert a positive number into a negative number and negative
//   number into a positive number using a switch statement.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:
                printf("\nNegative no. is %d",-a);
                break;
        case 0:
                printf("\nPositive number is %d",-a);
                break;
    }
    return 0;
}