#include<stdio.h>

int Even_NUM(int n)
{
    return n%2 == 0;
}

int main()
{
    int num;
    printf("Enter the number : \n");
    scanf("%d", &num);
    Even_NUM(num)==1 ? printf("%d is EVEN.", num) : printf("%d is not EVEN.", num);
    return 0;
}
