#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char str1[30],str2[30],str[61];
    int n,i,j;
    printf("Enter a string--");
    scanf("%s",&str1);
    printf("Enter 2nd string--");
    scanf("%s",&str2);
    strcat(str1,str2);
    printf("Original concatenated string is-%s \n",str1);
    n=strlen(str1);
    j=n-1;
    for(i=0;i<=n-1;i++,j--)
        str[i]=str1[j];
    printf("The rev order of string is-%s",str);
}
