#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],sume=0,sumo=0,i,j;
    for(i=0;i<10;i++)
    {
        printf("Enter %d integer input--",i+1);
        scanf("%d",&arr[i]);
    }
    for(j=0;j<10;j++)
        if(arr[j]%2==0)
            sume+=arr[j];
        else
            sumo+=arr[j];
    printf("\n");
    printf("Sum of even elements-%d\n",sume);

    printf("Sum of odd elements-%d",sumo);

}
