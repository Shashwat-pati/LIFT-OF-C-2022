#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 1st number--");
    scanf("%d",&a);
    printf("Enter a different number--");
    scanf("%d",&b);
    if(a>b)
        printf("%d is greater",a);
    else if(b>a)
        printf("%d is greater",b);
    else
        printf("-Wrong input-");
}
