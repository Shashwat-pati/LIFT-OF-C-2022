#include<stdio.h>
void swap_NUM(int *x, int *y)
{
    *x = *x+*y;
    *y = *x-*y;
    *x = *x-*y;

}

int main()
{
    int num1, num2;
    printf("Enter the value of x : \n");
    scanf("%d", &num1);
    printf("Enter the value of y : \n");
    scanf("%d", &num2);
    printf("Before swapping : \nx = %d & y = %d", num1, num2);
    swap_NUM(&num1, &num2);
    printf("\nAfter swapping : \nx = %d & y = %d", num1, num2);
    return 0;
}
