#include<stdio.h>
void main()
{
    int m1[2][2],m2[2][2],i,j,n,ms[2][2],mp[2][2]={0};
    printf("Enter elements of first matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&n);
            m1[i][j]=n;
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&n);
            m2[i][j]=n;
            printf("  ");
        }
    }
    //sum of matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            ms[i][j]=m1[i][j]+m2[i][j];
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d ",ms[i][j]);
        printf("\n");
    }
    //product of matrix
    int k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            mp[i][j]+=m1[i][k]*m2[k][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d ",mp[i][j]);
        printf("\n");
    }
}
