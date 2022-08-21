/*
4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
   isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
   a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
   or not
d. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,a,b,c;
    while(1)
    {
        printf("\n\n\"Menu driven program:\"\n");
        printf("1. Check Isoscales triangle or not\n");
        printf("2. Check Right Angled triangle or not\n");
        printf("3. Check Equilateral triangle or not\n");
        printf("4. Exit");
        printf("\n\n Enter your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter three numbers:");
                scanf("%d%d%d",&a,&b,&c);
                if((a==b&&b!=c)||(b==c&&c!=a)||(c==a&&a!=b))
                    printf("Isoscales triangle");
                else
                    printf("Not Isoscales triangle");
                break;
            case 2:
                printf("Enter three numbers:");
                scanf("%d%d%d",&a,&b,&c);
                if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
                    printf("Right angled triangle");
                else
                    printf("Not Right angled triangle");
                break;
            case 3:
                printf("Enter three numbers:");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b&&b==c)
                    printf("Equilateral triangle");
                else
                    printf("Not Equilateral triangle");
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid input");
        }
    }
    return 0;
}