#include<stdio.h>
#include<conio.h>
int main()
{
    int regd_num;
    char name[50],br[50],hob[50];
    printf("Enter your name--");
    scanf("%[^\n]s",name);
    printf("Enter your registration number--");
    scanf("%d",&regd_num);
    printf("Enter your branch--");
    scanf("%s",br);
    printf("Enter your hobbies--");
    scanf("%s",hob);
    printf("Name--> %s\n",name);
    printf("Registration number--> %d\n",regd_num);
    printf("Branch--> %s\n",br);
    printf("Hobbies--> %s\n",hob);
    return 0;
}

