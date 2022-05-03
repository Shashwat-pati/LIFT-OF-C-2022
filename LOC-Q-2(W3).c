#include<stdio.h>
int Prime_NUM(int a,int b)
{
    if(a<=2)
        return a==2;
    else if(a%b==0)
        return 0;
    else if(b*b>a)
        return 1;
    return Prime_NUM(a,b+1);
}
//Main program
int main()
{
    int num;
    printf("Enter the number : \n");
    scanf("%d",&num);
    Prime_NUM(num ,2)==1 ? printf("%d is a prime number.", num) : printf("%d is not a prime number.", num);
    return 0;
}
