#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    if(b%400==0)
    {
        printf("True");
    }
    else if(b%100==0)
    {
        printf("False");
    }
    else if(b%4==0)
    {
       printf("True"); 
    }
    else
    {
        printf("False"); 
    }
}