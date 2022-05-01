#include<stdio.h>
#include<math.h>
void main()
{
    int num,q,r,last,first,d;
    printf("Enter a no: ");
    scanf("%d",&num);
    last=num%10;
    d=(int)log10(num);
    q=num;
    while(q!=0)
    {
        r=q%10;
        q/=10;
        if(q==0)
        first=r;
    }
    q=(last*(int)pow(10,d))+(num%(int)pow(10,d));
    q=q-last+first;
    printf("Swapping first & last digit: %d",q);
}
