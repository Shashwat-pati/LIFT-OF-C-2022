#include<stdio.h>
void main()
{
    int a,b,c,num,i;
    printf("Enter number till which find Fibonacci series(after 0 & 1)-: ");
    scanf("%d",&num);
    a=0;
    b=1;
    printf("%d %d",a,b);
    for(i=0;i<num;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
}
