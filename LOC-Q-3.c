#include<stdio.h>
void main()
{
    int num,a;
    printf("Enter a number--");
    scanf("%d",&num);
    a=num%2;
    switch(a)
    {
    case 0:
        printf("%d is even number",num);
        break;
    default:
        printf("%d is odd number",num);
    }
}
