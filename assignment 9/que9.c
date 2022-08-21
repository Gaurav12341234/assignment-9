//9. Program to Convert even number into its upper nearest odd number
//   Switch Statement.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    switch(a%2==0)
    {
        case 1:
                printf("Upper nearest odd number is %d",a+1);
                break;
        case 0:
                printf("Upper nearest odd number is %d",a);
    }
    return 0;
}
