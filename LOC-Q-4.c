#include<stdio.h>
void main()
{
    float a,b,func;
    int modfunc;
    char sym,x;
    printf("Enter a arithmetic symbol->(+,-,*,/,%%)-- ");
    scanf("%s",&sym);
    printf("Enter 1st number-");
    scanf("%f",&a);
    printf("Enter 2nd number-");
    scanf("%f",&b);
    switch(sym)
    {
        case '+':
            func=a+b;
            printf("Sum of %f & %f is %f- %f",a,b,func);
            break;
        case '-':
            func=a-b;
            printf("Diff of %f & %f is- %f",a,b,func);
            break;
        case '*':
            func=a*b;
            printf("Product of %f & %f is- %f",a,b,func);
            break;
        case '/':
            func=a/b;
            printf("Division of %f by %f is- %f",a,b,func);
            break;
        case '%':
            modfunc=(int)a%(int)b;
            printf("Modulus of %f by %f is- %d",a,b,modfunc);
            break;
        default:
            printf("-No Choice-");
    }
}
