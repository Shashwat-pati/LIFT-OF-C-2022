#include<stdio.h>

int largest_Elem(int arr[], int len)
{
    for(int i = 1; i<len; i++)
    {
        if(arr[i]>arr[0])
            arr[0] = arr[i];
    }
    return arr[0];
}

int main()
{
    int n;
    printf("Enter the number of elements : \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The largest element is : %d", largest_Elem(arr, n));
    return 0;
}
