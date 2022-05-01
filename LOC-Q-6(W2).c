#include<stdio.h>
#include<conio.h>
void main()
{
    int N,i,j,k;
    printf("Enter a number-");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        if(i==1 || i==N)
        {
            for(j=1;j<=N;j++)
                printf("* ");
            printf("\n");
        }
        else
        {
            for(j=1;j<=N;j++)
            {
                if(j==1 || j==N)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
}
