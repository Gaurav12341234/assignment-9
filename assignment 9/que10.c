//10. C program to find all roots of a quadratic equation using switch case.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x1,x2;
    printf("Enter the coefficient of quadratic equ.");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    x1=(-b+sqrt(D))/(2*a);
    x2=(-b-sqrt(D))/(2*a);
    switch(D>0)
    {
        case 1:
                printf("Real and Distinct roots\n");
                printf("roots x1=%.2f and x2=%.2f",x1,x2);
                break;
        case 0: switch(D<0)
                {
                    case 1:
                            printf("Imaginary roots\n");
                            break;
                    case 0:
                            printf("Realand Equal roots\n");
                            printf("roots x1=%.2f and x2=%.2f",x1,x2);
                }
    }
    return 0;
}