/*
 2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int choice,a,b;
    while(1)
    {
    printf("\nMenu driven program:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit");
    printf("\n\n Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Addition is %d",a+b);
        break;
    case 2:
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Subtraction is %d",a-b);
        break;
    case 3:
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Multiplication is %d",a*b);
        break;
    case 4:
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Division is %d",a/b);
        break;
    case 5:
        exit(0);
    default:
        printf(" invalid Iutput");
        break;
    }
    }
    return 0;
}
